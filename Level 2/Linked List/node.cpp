#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    node *n = new node(10);
    cout<<n->data<<endl;
    cout<<n->next<<endl;
    return 0;
}