#include <iostream>
using namespace std;

class tree{
    public:
        int data;
        tree * left;
        tree *right;

    tree(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

tree * insertIntoBST(tree *root, int data){
    if(root == NULL){
        return new tree(data);
    }else if(data < root->data){
        root->left = insertIntoBST(root->left, data);
    }else{
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

tree * buildBST(){
    tree *root = NULL;
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cout<<"Enter the data (-1 for stop): ";
        cin>>data;
    }
    return root;
}

void morrisTraversal(tree *root){
    tree *curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            cout<<curr->data<<" ";
            curr = curr->right;
        }else{
            tree * pre = curr->left;
            while(pre->right != NULL && pre->right != curr){
                pre = pre->right;
            }
            if(pre->right == NULL){
                pre->right = curr;
                curr = curr->left;
            }else{
                pre->right = NULL;
                cout<<curr->data<<" ";
                curr= curr->right;
            }
        }
    }
}

void flattenBST(tree *root){
    tree *curr = root;
    while(curr != NULL){
        cout<<curr->data<<" ";
        if(curr->left == NULL){
            curr= curr->right;
        }else{
            tree *pre = curr->left;
            while(pre->right != NULL && pre->right != curr){
                pre = pre->right;
            }
            if(pre->right == NULL){
                pre->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
                curr = curr->right;
            }else{
                pre->right = NULL;
                curr= curr->right;
            }
        }
    }
}

int main() {
    tree* root = buildBST();
    cout << endl;
    cout<<"Morris traversal: ";
    morrisTraversal(root);
    cout<<endl<<"Flatted BST: ";
    flattenBST(root);
    return 0;
}