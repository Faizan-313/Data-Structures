#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node* next;

    node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};


void print(node* &head){
    node *temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }cout<<endl;
}

void insert_at_head(node * &head,node *& tail,int d){
    node *temp = new node(d);
    if(head==NULL){
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_at_tail(node* &head,node *&tail, int d){
    node *temp = new node(d);
    if(tail==NULL){
        head = temp;
        tail= temp;
        return;
    }
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insert_at_position(node *&head,node* &tail, int p,int d){
    if(p<=1){
        insert_at_head(head,tail,d);
        return;
    }

    node *trav = head;
    node *temp = new node(d);
    int i=1;
    while(i<p-1 && trav->next != NULL){
        trav = trav->next;
        i++;
    }
    if(trav->next==NULL){
        insert_at_tail(head,tail,d);
        return;
    }
    temp->next = trav->next;
    trav->next = temp;
    temp->next->prev = temp;
}

//given position where you want to delete the node
void delete_at_position(node* &head,node* &tail, int p){
    node *trav = head;

    //deleting head node
    if(p<=1){
        head = head->next;
        trav->next = NULL;
        head->prev =NULL;
        delete trav;
    }else{
        int i=1;
        while(i<p-1){
            trav = trav->next;
            i++;
        }
        node * temp = trav->next;

        if(trav->next->next == NULL) {
            tail = trav;
            trav->next = temp->next;
            temp->prev = NULL;
            delete temp;
            return;
        }
        trav->next = temp->next;
        temp->next->prev = temp->prev; 
        temp->next = NULL;
        delete temp;
    }
}

int main(){
    node *n1 = new node(10);
    node *head= n1;
    node *tail=  n1;
    insert_at_head(head,tail,1);
    insert_at_head(head,tail,2);
    print(head);

    insert_at_tail(head,tail,3);
    insert_at_tail(head,tail,4);
    print(head);

    insert_at_position(head,tail,1,90);
    insert_at_position(head,tail,7,91);
    insert_at_position(head,tail,0,92);
    insert_at_position(head,tail,6,93);
    insert_at_position(head,tail,90,99);
    print(head);
    cout<<tail->data<<endl;    
    cout<<head->data<<endl;

    delete_at_position(head,tail,3);
    delete_at_position(head,tail,1);
    delete_at_position(head,tail,7);
    delete_at_position(head,tail,7);
    print(head);
    cout<<tail->data<<endl;    
    cout<<head->data<<endl;
    return 0;
}