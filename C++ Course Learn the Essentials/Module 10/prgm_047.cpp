/*Topic : Working with Linear Search in Array*/

#include<iostream>
using namespace std;

//  defining function
void printArr(int *myArr, int myArrCap){
    cout<<"The Elements in array are : ";
    for(int i=0;i<=myArrCap-1;i++){
        cout<<myArr[i]<<" ";
    }
    cout<<endl;
}

// defining function
int linearSearch(int myArr2[], int myArrCap2, int key){
    for(int i=0;i<=myArrCap2-1;i++){
        if(myArr2[i]==key){
            return i;
        }
    }
    return -8;
}

int main(){
    //  for number of elements in array
    int arrCap;
    cout<<"Enter the Size of Array : "<<endl;
    cin>>arrCap;
    //  user input for elements of array
    int arr[arrCap];
    for(int i=0; i<=arrCap-1;i++){
        cout<<"Element is index "<<i<<" is : ";
        cin>>arr[i];
    }

    //  function call
    printArr(arr, arrCap);

    //  search the number
    int serKey;
    cout<<"Enter the value to be search : "<<endl;
    cin>>serKey;

    //  function call
    int res;
    res = linearSearch(arr, arrCap, serKey);
    if(res==-8){
        cout<<"Element not found "<<endl;
    }else{
        cout<<"Element "<<serKey<<" is present at index : "<<res<<endl;
    }
}