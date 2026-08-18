/*THIS IS THE PROGRAM OF INSERTING ITEM ON THE BEGINNING OF LINKL LIST */

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node (int new_data){
        data = new_data;
        next = nullptr;
    }
};

node* insertatfront(node* head, int new_data){
    node * new_node = new node(new_data);
    new_node -> next = head;
    return new_node;
}

void printlist(node* head){
    node* curr = head;
    while(curr!=nullptr){
        cout<<"->"<<curr->data;
        curr = curr->next;
    }
    cout<<endl;

}

int main(){
    // ASSIGNING THE NODES AND THEIR DATA
    node* head = new node(2);
    head -> next = new node(3);
    head ->next -> next = new node(4);
    head -> next -> next -> next = new node(5);




    // node* head = new node();
    // int n ;
    // cout<<"Enter the number of element in arr\t";
    // cin>>n;
    // int i = 1; int arr[n];int m;
    // cout<<"\nEnter the node of linklist\t";
    // cin>>m;
    // while(i<=m){


    //     i++;
    // }




    cout<<"Original link list\n";
    printlist(head);

    cout<<"\nAfter inserting the link list";
    int data = 1;
    head = insertatfront(head, data);
    printlist(head);

    return 0;
}


/* HERE IS THE PROGRAM OF INSERTION OF DATA IN LINK LISK AFTER GIVEN NODE*/


// #include<iostream>
// using namespace std;

// struct node{
//     int data;
//     node* next;
//     node(int new_node){
//         data = new_node;
//         next = nullptr;
//     }
// };

// node* insert_n_node(node* head, int key ,int new_data){
//     node* curr = head;
//     while(curr!= nullptr){
//         if (curr->data == key){
//             break;
//         }
//         curr = curr->next;
//     }
//     if (curr == nullptr){
//         return head;
//     }
//     node* newnode = new node(new_data);
//     newnode -> next = curr->next;
//     curr->next = newnode;
//     return head;
// }

// void printlist(node* node){
//     while(node != nullptr){
//         cout<<"->"<<node->data;
//         node = node->next;
//     }
// }

// int main(){
//     node* head = new node(4);
//     head -> next = new node(5);
//     head -> next -> next = new node(6);
//     head -> next ->next->next= new node(8);
//     cout<<"\nOriginal link list\n";
//     printlist(head);
//     int key = 5;
//     int data = 2;
//     head = insert_n_node(head,key,data);
//     cout<<"\nAfter the adding of link list at 3 node\n";
//     printlist(head);
    
//     return 0;
// }