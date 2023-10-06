/*Topic : Working with Array (user-input)*/

#include<iostream>
using namespace std;
int main(){
    //  declaring an array
    int i, ArrCap;
    cout<<"Enter the capacity of Array : "<<endl;
    cin>>ArrCap;
    int arr[ArrCap];

    //  array size
    int ArrSiz = sizeof(arr)/sizeof(int);
    cout<<"The size of array is : "<<ArrSiz<<endl;

    //  Enter elements in Array
    for(i=0;i<=ArrCap-1;i++){
        cout<<"Element in index "<<i<<" is : ";
        cin>>arr[i];
        // cout<<endl;
    }
    cout<<"The elements in array are : ";
    for(i=0;i<ArrCap;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}