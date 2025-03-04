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

Tree * insertIntoBst(Tree* root, int data){
    if(root == NULL){
        root = new Tree(data);
    }
    else if(data < root->data) root->left = insertIntoBst(root->left,data);
    else if(data > root->data) root->right = insertIntoBst(root->right, data);
    return root;
}

Tree * buildBST(Tree * root){
    cout<<"Enter the data (-1 to stop): ";
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBst(root,data);
        cout<<"Enter the data (-1 to stop): ";
        cin>>data;
    }
    return root;
}

Tree * minBst(Tree* root){
    if(root->left == NULL) return root;
    Tree * min = minBst(root->left);
    return min;
}

Tree* maxBst(Tree * root){
    if(root->right == NULL) return root;
    return maxBst(root->right);
}

void inorder(Tree* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}



int main(){
    Tree * root = NULL;
    root = buildBST(root);
    Tree* min = minBst(root);
    Tree* max = maxBst(root);
    cout<<endl<<"mininmum value in Bst: "<<min->data<<endl;
    cout<<endl<<"maximum value in Bst: "<<max->data<<endl;
    cout<<"printing in inorder"<<endl;
    inorder(root);
}
