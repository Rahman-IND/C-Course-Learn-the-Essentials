/*Topic : Variable and datatypes */

#include<iostream>
using namespace std;
int main(){
    //  variable declaration
    int marks;
    cout<<"Enter the marks : ";
    //  taking input
    cin>>marks;
    //  showing output
    cout<<"Marks :"<<marks<<endl;
    int a,b,c;
    //  variable initialization 
    a=10;
    cout<<"Enter the value of B : ";
    cin>>b;
    cout<<"Enter the value of C : ";
    cin>>c;

    cout<<"The sum "<<a+b+c<<endl;
    cout<<"The module is "<<b%c<<endl;
    return 0;
}