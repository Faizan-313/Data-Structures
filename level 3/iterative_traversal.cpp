#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class tree{
    public:
        int data;
        tree *left;
        tree *right;

    tree(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

tree * buildTree(tree * root){
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    root = new tree(data);
    if(data == -1){
        return NULL;
    }
    
    cout<<"Enter the data for left side of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for right side of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(tree * root){
    if(root == NULL) return;
    queue<tree *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        tree *temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void inorderTraversal(tree * root){
    if(root == NULL) return;
    stack<tree *> s;
    tree * temp = root;

    while(!s.empty() || temp != NULL){

        while(temp != NULL){
            s.push(temp);
            temp = temp->left;
        }

        temp = s.top();
        s.pop();
        cout<<temp->data<<" ";
        
        temp = temp->right;
    }
}

void preorderTraversal(tree *root){
    if(root == NULL) return;
    stack<tree *> s;
    tree * temp = root;

    while(!s.empty() || temp != NULL){

        while(temp != NULL){
            s.push(temp);
            cout<<temp->data<<" ";
            temp = temp->left;
        }
        temp = s.top();
        s.pop();

        temp = temp->right;
    }
}

void postorderTraversal(tree *root){
    if(root == NULL) return;
    stack<tree *> s1;
    stack<tree *> s2;
    s1.push(root);

    while(!s1.empty()){
        tree * temp = s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left) s1.push(temp->left);
        if(temp->right) s1.push(temp->right);
    }

    while(!s2.empty()){
        tree *temp = s2.top();
        cout<<temp->data<<" ";
        s2.pop();
    }
}

//post order traversal using stack and string instead of two staacks
void postorderTraversal_string(tree *root){
    if(root == NULL) return;
    stack<tree *> s1;
    string ans;
    s1.push(root);

    while(!s1.empty()){
        tree * temp = s1.top();
        s1.pop();
        ans.push_back(temp->data + '0'); // Convert int to char
        if(temp->left) s1.push(temp->left);
        if(temp->right) s1.push(temp->right);
    }

    for(int i = ans.length()-1; i>=0;i--){
        cout<<ans[i] - '0' <<" ";
    }
}

//1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1

int main(){
    tree *root = NULL;
    root = buildTree(root);

    cout<<endl<<"Printing in Level Order Traversal"<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"Printing Inorder Traversal"<<endl;
    inorderTraversal(root);

    cout<<endl<<"Printing Preorder Traversal"<<endl;
    preorderTraversal(root);

    cout<<endl<<"Printing Postorder Traversal"<<endl;
    postorderTraversal(root);

    cout<<endl<<"Printing Postorder Traversal using stack and string"<<endl;
    postorderTraversal_string(root);
    return  0;
}