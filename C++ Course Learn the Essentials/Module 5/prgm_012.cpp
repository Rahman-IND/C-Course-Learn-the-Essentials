/*Topic : Compound Assignment Operator*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    cout<<"Value of A is "<< a<<" and value of B is "<< b<<endl;

    //  compound Assignment operator
    cout<<"---- Compound Assignment Operator ----"<<endl;
    a+=b;
    cout<<"After Addition : A is "<< a<<" and : B is "<< b<<endl;
    a-=b;
    cout<<"After Substraction : A is "<< a<<" and : B is "<< b<<endl;
    a*=b;
    cout<<"After Multiplication : A is "<< a<<" and : B is "<< b<<endl;
    a/=b;
    cout<<"After Division : A is "<< a<<" and : B is "<< b<<endl;
    a%=b;
    cout<<"After Modulo : A is "<< a<<" and : B is "<< b<<endl;

    return 0;
}