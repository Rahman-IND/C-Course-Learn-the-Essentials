/*Topic : Working with Array*/

#include<iostream>
using namespace std;
int main(){
    int arr[100] = {11,12,13,14};
    
    cout<< arr[0]<<endl;
    cout<< arr[1]<<endl;
    cout<< arr[2]<<endl;

    int n = sizeof(arr)/sizeof(int);
    cout<<"Total element size of array is : "<< n<<endl;

    //  print all the elements of the array
    int i;
    int ArrSiz = n;
    for(i=0;i<=ArrSiz-1;i++){
        cout<< arr[i]<<",";        //  it will show which index stored what value.
    }
    cout<<endl;
    return 0;
}