#include<iostream>
using namespace std;

// MAKING A STRUCTURE WITH TWO DATA TYPE ONE IS INTEGER AND ANOTHER IS A POINTER 

struct node{
    int data;
    node* next;
};
void traverse_list(node*head){

    // for checking the list is empty or not 

    if (head == nullptr){
        cout<<"NULL"<<endl;
        return;
    }

    node* current = head;

    // WHILE LOOP FOR CONTINUE LOOP FOR ACCCES THE DATA OF NEXT NODE FROM THE PREVIOUS NODE POINTER

    // cout<<"start"<<"->";
    // while (current != nullptr)
    // {
    //     cout<<current->data<<"->";
    //     current = current->next;
    // }

    cout<<"start"<<"->";
    do
    {
        cout<<current->data<<"->";
        current = current->next;
    } while (current != nullptr);
    
    cout<<"nullptr";
}

int main(){

    // ASSIGNING THE POINTER FROM STRUCTURE NODE

    node* head = new node();
    node* second = new node();
    node* third = new node();

    // ASSIGNING THE VALUE IN THE NODE 

    // head->data = 10;
    // head->next = second;
    // second->data = 20;
    // second->next = third;
    // third->data = 30;
    // third->next = nullptr;

    // TAKING VALUE FROM USER IN THE LINK LIST 

    cout<<"Enter the first value:\t";
    cin>>head->data;
    head->next = second;
    cout<<"Enter the second value:\t";
    cin>>second->data;
    second->next = third;
    cout<<"Enter the third value:\t";
    cin>>third->data;
    third->next = nullptr;

    // CALLING THE FUNCTION FOR DISPLAYING THE LINK LIST

    cout<<"\nHere is the list of link_list\n";
    traverse_list(head);

    // CLEANING THE MEMORY (OPTIONAL)

    delete head;
    delete second;
    delete third;
    return 0;
}