/*Topic :  working Arithmetic operators*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    //  taking user-input
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;

    cout<<"Addition : "<< (a+b)<<endl;
    cout<<"Substraction : "<< (a-b)<<endl;
    cout<<"Multiplication : "<< (a*b)<<endl;
    cout<<"Division : "<< (a/b)<<endl;
    cout<<"Modulo : "<< (a%b)<<endl;

    //  original value of the variables (after user-input)
    cout<<"a = "<< a<<endl;
    cout<<"b = "<< b<<endl;

    return 0;
}