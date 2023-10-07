/*Topic : Woring with array*/

#include<iostream>
using namespace std;
void entArr(int *myArr, int myArrCap){
    for(int i=0;i<myArrCap;i++){
        cout<<"Enter the "<<i<<" element : ";
        cin>>myArr[i];
    }
}
void prntArr(int *myArr2,int myArrCap2){
    cout<<"Elements in array are : ";
    for(int i=0;i<myArrCap2;i++){
        cout<<myArr2[i]<<" ";
    }
    cout<<endl;
}
void reverse(int *myArr3,int myArrCap3){
    cout<<"The array in reverse : ";
    for(int i=myArrCap3-1;i>=0;i--){
        cout<<myArr3[i]<<" ";
    }
    cout<<endl;
}
void reverse2(int *myArr4,int myArrCap4){
    cout<<"The array in reverse : ";
    for(int i=0;i<myArrCap4;i++){
        cout<<myArr4[myArrCap4-1-i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arrCap;
    cout<<"Enter the capacity of the array: "<<endl;
    cin>>arrCap;
    int arr[arrCap];
    
    entArr(arr,arrCap);
    prntArr(arr,arrCap);
    reverse(arr,arrCap);
    reverse2(arr,arrCap);
}