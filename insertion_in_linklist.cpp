#include<iostream>
using namespace std;

//define the node structure
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};
// function to insert a node at the beginning
void insert_at_beginning(Node* & head, int new_value){
    Node* new_node = new Node(new_value);
    new_node->next = head;
    head = new_node;
}
// function to print the entire linklist
void display(Node*head){
    Node*temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null "<<endl;
}

int main(){
    Node* head = nullptr;
    cout<<"Inserting elements at teh beginning..\n";
    insert_at_beginning(head, 30);
    insert_at_beginning(head, 20);
    insert_at_beginning(head, 10);
    cout<<"linked list ";
    display(head);
    return 0;
}