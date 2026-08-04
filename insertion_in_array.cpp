// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    /*Here we create an array from user */
    cout<<"enter the array number\n";
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n;i++){
        cout<<"enter the "<<i<<" element"<<endl;
        cin>>arr[i];
    }
    for(int i=1; i<=n;i++){
         cout<<"The "<<i<<" element of array are: "<<arr[i]<<endl;
    }
    /*Now we perform the insertion in array by their index number */
    int x;
    int item;
    cout<<"enter the index value of array\n";
    cin>>x;
    cout<<"enter the value you want to insert"<<endl;
    cin>>item;
    for(int i=(n+1);i<=x+1;x--){
        arr[i] = arr[i-1];
    }
    arr[x] = item;
    
    for(int i=1; i<=n+1;i++){
         cout<<"The "<<i<<" element of array are: "<<arr[i]<<endl;
    }
    
    return 0;
}
