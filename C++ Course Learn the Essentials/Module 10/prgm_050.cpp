/*Topic : Working with 2D array*/

#include<iostream>
using namespace std;

int main(){
    //  numbers of rows and column in the array
    int row,col;
    cout<<"Enter the number of Row : "<<endl;
    cin>>row;
    cout<<"Enter the number of Col : "<<endl;
    cin>>col;
    //  declaring 2D array
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the number in index "<<i<<","<<j<<" :"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"/// The 2D array ///"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}