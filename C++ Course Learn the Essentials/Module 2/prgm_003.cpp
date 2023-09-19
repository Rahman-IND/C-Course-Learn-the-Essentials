/*Topic : Sum of numbers*/

//  Take input 3 numbers and print their sum.

#include<iostream>
using namespace std;
int main(){
    //  creating 3 variables
    int a,b,c;

    //  checking initial values of the variables (Garbage values)
    cout<<"A "<<a<<" B "<<b<<" C "<<c<<endl;

    //  User-input for variables
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    cout<<"Enter the value of C : ";
    cin>>c;

    //  printing the sum of 3 numbers
    cout<<"The sum 3 number is : "<<(a+b+c)<<endl;

    //  another way to print the Sum
    int sum = a+b+c;
    cout<<"The sum 3 number is : "<<sum;

    return 0;
}