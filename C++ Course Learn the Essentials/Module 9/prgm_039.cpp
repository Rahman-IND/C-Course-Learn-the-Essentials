/*Topic : Working with dereference operator*/\

#include<iostream>
using namespace std;
int main(){
    int x =10;
    int * xptr = &x;

    cout<< x<<endl;         //  value of variable x
    cout<< &x<<endl;        //  address of variable x
    cout<< xptr<<endl;      //  value stored in pointer variable xptr
    cout<< &xptr<<endl;     //  address of pointer variable xptr
    cout<< *(&x)<<endl;     //  value of variable x (dereference operator)

    return 0;
}