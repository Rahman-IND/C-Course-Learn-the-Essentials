/*Topic : Working with datatypes*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //  declaring and initializing variables
    int a = 10;
    float b = 20.5684278152;
    double c = 20.5684278152;
    char d = 'A';
    bool e = true;

    //  print stored values of variables
    cout<<"The value of integer A : "<<a<<endl;
    cout<< fixed << setprecision(8) <<"The value of float B : "<<b<<endl;                
    cout<< fixed << setprecision(8) <<"The value of double c : "<<c<<endl;
    cout<<"The value of char D : "<<d<<endl;
    cout<<"The value of bool E : "<<e<<endl;

    
    //  User-input for variables
    cout<<"Enter the value of integer A : ";
    cin>>a;
    cout<<"Enter the value of float B : ";
    cin>>b;
    cout<<"Enter the value of double C : ";
    cin>>c;
    cout<<"Enter the value of char D : ";
    cin>>d;
    cout<<"Enter the value of bool E : ";
    cin>>e;
    cout<<"----------------------------------"<<endl;
    
    //  print user-input values of variables
    cout<<"The value of integer A : "<<a<<endl;
    cout<< fixed << setprecision(9) <<"The value of float B : "<<b<<endl;
    cout<< fixed << setprecision(9) <<"The value of double c : "<<c<<endl;
    cout<<"The value of char D : "<<d<<endl;
    cout<<"The value of bool E : "<<e<<endl;
    return 0;
}