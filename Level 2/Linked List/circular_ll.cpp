#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insert_node(node *&tail,int l_data, int d){
    node *temp= new node(d);
    if(tail==NULL){
        tail = temp;
        temp->next = temp;
        return;
    }
    node *trav = tail;
    while(trav->data != l_data){
        trav= trav->next;
    }
    temp->next = trav->next;
    trav->next = temp;
    if(trav = tail){
        tail = trav->next;
    }
}


void deletion(node *&tail, int data){
    if(tail==NULL){
        return;
    }
    node *temp = tail;
    while(temp->next->data != data){
        temp = temp->next;
    }
    node *t = temp->next;
    temp->next = t->next;
    t->next = NULL;
    if(t == tail){
        tail = temp;
    }
    delete t;
}




void print(node *&tail){
    node *temp = tail;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != tail);
    cout<<endl;
}


int main(){
    node *tail = NULL;
    insert_node(tail,10,11);
    insert_node(tail,11,12);
    insert_node(tail,11,13);
    print(tail);

    deletion(tail,11);
    deletion(tail,12);
    print(tail);
}