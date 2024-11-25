#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to create a linked list with a loop
Node* createLinkedListWithLoop() {
    // Create nodes
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Create a loop (fourth points back to the second)
    fourth->next = second;

    return head;
}

void remove_loop(Node* slow, Node* fast){
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    cout<<"Loop detected at node "<<fast->next->data<<endl;
    fast->next = nullptr;
}

// Function to detect a loop using Floyd's cycle-finding algorithm
void detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            slow = head;
            remove_loop(slow,fast);
            return;
        }
    }
}

void print(Node* &head){
    Node *temp = head;
    while (temp != NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node* head = createLinkedListWithLoop();
    detectLoop(head);
    print(head);
    return 0;
}
