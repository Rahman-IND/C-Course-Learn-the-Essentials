/*Topic : Working with Increment and Decrement Operators */

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 5;
    int c,d;
    cout<<"value of A is "<< a<<" and value of B is "<< b<<endl;

    //  Increment and Decrement Operators
    cout<<" --Pre-Increment and Pre-Decrement Operators-- "<<endl;
    c = ++a;            //  here 'a' will increase first from (10-->11) then get stored in 'c' and 'a'
    cout<<"The value of C is "<<c<<" A is : "<< a<<endl;
    d = --b;            //  here 'b' will decrease first from (5-->4) then get stored in 'd' and 'b'
    cout<<"The value of D is "<<d<<" B is : "<< b<<endl;

    int w = 20;
    int x = 4;
    int y,z;
    cout<<"\n value of W is "<< w<<" and value of X is "<< x<<endl;

    cout<<" --Post-Increment and Post-Decrement Operators-- "<<endl;
    y = w++;            //  here 'w' will get stored in 'y' first then get increase (20-->21) & stored in 'w'
    cout<<"The value of Y is "<<y<<" W is : "<< w<<endl;
    z = x--;            //  here 'x' will get stored in 'z' first then get decrease (4-->3) & stored in 'x'
    cout<<"The value of Z is "<<z<<" X is : "<< x<<endl;

    return 0;
}