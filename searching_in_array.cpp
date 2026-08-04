#include<iostream>

using namespace std;

int main(){
    /* In this we make a user defined array */

    int n;
    cout<<"Enter the number of element in a array:\t";
    cin>>n;
    int arr[n];
    cout<<"Enter the element for array\n";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<"The "<<i<<" element of array are: "<<arr[i]<<endl;
    }
    /* Now we perform the searching in the array */
    int item;
    cout<<"\nEnter the element you wanted to search in the array\t";
    cin>>item;
    cout<<endl;
    for(int i=1;i<=n;i++){
        if (item == arr[i]){
            cout<<"The item: "<<item<<" is present in "<<i<<" index of array.\n"; 
        }
        else{
            cout<<item<<" is not available in array\nIt will be added in new array:\n";
            arr[n+1] = item;
            for(int i=1;i<=n+1;i++){
                cout<<"The "<<i<<" element of array are: "<<arr[i]<<endl;
            }
        }
        break;
    }
    return 0;
}