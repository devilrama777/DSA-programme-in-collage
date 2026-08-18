/*THIS IS THE PROGRAME IN WHICH WE SEARCH ELEMENT IN THE LINKLIST (SORTED AND UNSORTED BOTH)*/


#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node (int new_data){
        data = new_data;
        next = nullptr;
    }
};

void add_in_linklist(node* &head, int val){
    node* newnode = new node(val);
    if(head == nullptr){
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newnode;
}

void search_in_linklist(node* head, int &src){
    cout<<endl;
    node* curr = head;
    while (curr!=nullptr){
        if (curr->data == src){
            cout<<curr->data<<" is found in the link list";
            break;
        }
        curr = curr->next;
        if (curr == nullptr){
            cout<<src<<" is not found in the link list";
        }
    }

}

void print_list(node* head){
    node* curr = head;
    while (curr!=nullptr){
        cout<<curr->data;
        curr = curr->next;
        if (curr!=nullptr) cout<<"->";
    }
    cout<<endl;
}

int main(){
    // node* head = new node(2);
    // head ->next = new node(4);
    // head -> next -> next = new node(6);
    // head -> next -> next -> next = new node(8);
    
    int i,x,val;
    node* head = nullptr;
    cout<<"\nHow many elements you wanted to add in linklist:\t";
    cin>>x;
    for(i=1;i<=x;i++){
        cout<<"Enter the value you wanted to add in linklist at node no. :"<<i<<'\t';
        cin>>val;
        add_in_linklist(head, val);
    }
    cout<<"\nORIGINAL LINK LIST\n";
    print_list(head);
    int search;
    cout<<"\nEnter the element which you wanted to search in the linklist\t";
    cin>>search;
    search_in_linklist(head, search);

    return 0;
}