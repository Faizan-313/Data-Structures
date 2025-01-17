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
    cout<<"Enter data: ";
    int data;
    cin>>data;
    root = new tree(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for the left side "<<data<<endl;;
    root->left = buildTree(root->left);
    cout<<"Enter data for the right side "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

// 1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1

void levelOrderTraversal(tree * root){
    queue<tree*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        tree *temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout <<endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void reverseLevelOrderTraversal(tree *root){
    queue<tree*> q;
    stack<tree*> s;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        tree *temp = q.front();
        q.pop();

        
        if (temp == NULL) {
            s.push(NULL); 
            if (!q.empty()) {
                q.push(NULL); 
            }
        }else{
            s.push(temp);
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
    }
    while(!s.empty()){
        tree *temp = s.top();
        if(temp == NULL){
            if (!s.empty()) {
                cout <<endl;
            }
        }else{
            cout<<temp->data<<" ";
        }
        s.pop();
    }
}

void inorderTraversal(tree *root){
    if(root == NULL) return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(tree *root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(tree *root){
    if(root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}


int main(){
    tree *root = NULL;
    root = buildTree(root);

    cout<<endl<<"Printing in Level Order Traversal"<<endl;
    levelOrderTraversal(root);

    cout<<"Printing in Reverse Level Order Traversal";
    reverseLevelOrderTraversal(root);

    cout<<endl<<"Printing Inorder Traversal"<<endl;
    inorderTraversal(root);

    cout<<endl<<"Printing Preorder Traversal"<<endl;
    preorderTraversal(root);

    cout<<endl<<"Printing Postorder Traversal"<<endl;
    postorderTraversal(root);
    return  0;
}