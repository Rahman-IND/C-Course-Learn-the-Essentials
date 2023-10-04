/*Topic : working with address of Operator*/

#include<iostream>
using namespace std;
int main(){
    int x =10;
    cout<<"Address of int variable : "<< &x<<endl;        //  printing address of x variable

    float y;
    cout<<"Address of float variable : "<<&y<<endl;       //  printing address of x variable

    char letter = 'B';
    cout<<"Address of char variable : "<<(void *) &letter<<endl;    //  Special behaviour

    int arr[100];
    cout<<"Printing array 'arr' : "<<arr<<endl;             //  will print address of array by default
    cout<<"Address of array 'arr' : "<<&arr<<endl;          //  printing address of array

    return 0;
}