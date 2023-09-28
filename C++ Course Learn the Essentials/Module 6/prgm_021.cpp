/*Topic : Working with conditional statement*/

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char Op;                //  Operator : this can be --> +,-,*,/
    cout<<"Enter the value of num1 : "<<endl;
    cin>>num1;
    cout<<"Enter the Operator : "<<endl;
    cin>>Op;
    cout<<"Enter the value of num2 : "<<endl;
    cin>>num2;
    //  switch case statement
    switch (Op)
    {
    case '+':
        cout<<"Addition : "<<num1+num2<<endl;
        break;
    case '-':
        cout<<"Subtraction : "<<num1-num2<<endl;
        break;
    case '*':
        cout<<"Multiplication : "<<num1*num2<<endl;
        break;
    case '/':
        cout<<"Division : "<<num1/num2<<endl;
        break;
    default: cout<<"Please enter a valid input.";
        break;
    }

    return 0;
}