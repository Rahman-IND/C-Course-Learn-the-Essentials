/*Topic : Working with passing array to function */

#include<iostream>
using namespace std;

//  defining function
void Print(int *myArray, int n){            //  pointer is declared here
    cout<<"Elements in array are : ";
    for(int i =0; i<=n-1;i++){
        cout<<myArray[i]<<",";
    }
    cout<<endl;
}

int main(){
    int ArrCap;
    cout<<"Enter the capacity of Array : "<<endl;
    cin>>ArrCap;
    //  declaring array and in size
    int arr[ArrCap];

    //  Array size (check)
    int arrSize;
    arrSize = sizeof(arr)/sizeof(int);
    cout<<"Size of the array is "<<arrSize<<endl;

    for(int i=0;i<=ArrCap-1;i++){
        cout<<"Element in index "<<i<<" is : ";
        cin>>arr[i];
    }

    //  function call
    Print(arr, ArrCap);
}