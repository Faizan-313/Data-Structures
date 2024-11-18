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

    //destructor
    ~node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insert_at_head(node* &head, int d){
    //create new node
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insert_at_tail(node* &tail, int d){
    //create new node
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_position(node* &head,node* &tail,int position, int d){
    node *trav = head;
    //insert at position 1 (head)
    if(position==1){
        insert_at_head(head,d);
        return;
    }
    node *temp = new node(d);
    int i = 1;
    while(i<position-1){
        trav = trav->next;
        if(trav==NULL){
            insert_at_tail(tail,d);
            return;
        }
        i++;
    }

    temp->next = trav->next;
    trav->next = temp;

}

//given position where you want to delete the node
void delete_at_position(node* &head,node* &tail, int p){
    node *trav = head;

    //deleting head node
    if(p==1){
        head = head->next;
        trav->next = NULL;
        delete trav;
    }else{
        int i=1;
        while(i<p-1){
            trav = trav->next;
            i++;
        }
        node * temp = trav->next;

        if(trav->next->next == NULL) tail = trav;
        trav->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}



void print(node* &head){
    node *temp = head;
    while (temp != NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node *n = new node(10);

    node *head = n;
    node *tail = n;

    insert_at_head(head,12);
    insert_at_head(head,14);
    print(head);

    cout<<"insert at tail"<<endl;
    insert_at_tail(tail,20);
    insert_at_tail(tail,22);
    insert_at_tail(tail,24);
    print(head);

    cout<<"insert at position"<<endl;
    insert_at_position(head,tail,2,123);
    insert_at_position(head,tail,9,2345);
    insert_at_position(head,tail,1,5678);
    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;


    cout<<"deleting"<<endl;
    delete_at_position(head,tail,3);
    delete_at_position(head,tail,1);
    delete_at_position(head,tail,7);
    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;
    return 0;
}