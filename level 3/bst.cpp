#include <iostream>
#include <queue>
using namespace std;

class Tree{
    public:
        int data;
        Tree * left;
        Tree * right;

    Tree(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Tree* insertIntoBST(Tree* root, int data) {
    if (root == NULL) {
        return new Tree(data);
    }
    if (data < root->data) {
        root->left = insertIntoBST(root->left, data);
    } else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

Tree* buildBST(Tree* root) {
    int data;
    cout << "Enter the data (-1 to stop): ";
    cin >> data;
    while (data != -1) {
        root = insertIntoBST(root, data);
        cout << "Enter the data (-1 to stop): ";
        cin >> data;
    }
    return root;
}
void levelOrderTraversal(Tree * root){
    queue<Tree*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Tree *temp = q.front();
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

int main(){
    Tree *root = NULL;
    root = buildBST(root);

    levelOrderTraversal(root);
}