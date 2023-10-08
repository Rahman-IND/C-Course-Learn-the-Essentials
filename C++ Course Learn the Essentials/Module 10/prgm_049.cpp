/*Topic : Working with array */

#include<iostream>
using namespace std;
//  Reverse an array in place

//  defining function input for array
void inputArr(int *myArr, int myArrCap){
    for(int i=0;i<myArrCap;i++){
        cout<<"Enter the "<<i<<" element : ";
        cin>>myArr[i];
    }
    cout<<endl;
}

//  defining function to display the input array
void displayArr(int *myArr2,int myArrCap2){
    cout<<endl;
    for(int i=0;i<myArrCap2;i++){
        cout<<myArr2[i]<<" ";
    }
    cout<<endl;
}

//  defining function to reverse the array using swap method
void SwapReverseArr(int *myArr5,int myArrCap5){
    int arrStart=0;
    int arrEnd=myArrCap5-1;
    while (arrStart<arrEnd)
    {
        swap(myArr5[arrStart],myArr5[arrEnd]);
        arrStart++;
        arrEnd--;
    }
    
}

//  main function
int main(){
    //  user input
    int arrCap;
    cout<<"Enter the capacity of array : "<<endl;
    cin>>arrCap;
    int arr[arrCap];
    //  function call
    inputArr(arr,arrCap);
    cout<<"Normal array : ";
    displayArr(arr,arrCap);
    SwapReverseArr(arr,arrCap);
    cout<<"Reversed array : ";
    displayArr(arr,arrCap);
}