// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    cout<<"enter the array number\n";
    int n;
    cin>>n;
    int arr[n+1];
    cout<<"enter the element"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"the element are \n";
    
    for(int i=0; i<n;i++){
        cout<<arr[i]<<", "<<endl;
    }
    
    int x;
    cout<<"enter the value of position\n";
    cin>>x;
    int item;
    cout<<"enter the value you want to insert"<<endl;
    cin>>item;
    for(int i=(n+1);i<=x+1;x--){
        arr[i] = arr[i-1];
    }
    arr[x] = item;
    
    for(int i=0; i<n;i++){
        cout<<arr[i]<<", ";
    }
    
    return 0;
}