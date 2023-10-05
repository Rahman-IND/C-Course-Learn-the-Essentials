/*Topic : Working with Pointer variable */

#include<iostream>
using namespace std;
int main(){
    int x =10;
    cout<<"Address of x : "<< &x<<endl;                     //  address of x
    int *xptr = &x;                                         //  now the "address of x" is stored in pointer vaiable xptr
    cout<<"Address of x in xptr : "<< xptr<<endl;           //  print pointer variable xptr

    float y=10.56;
    cout<<"Address of y : "<< &y<<endl;                     //  address of y
    float * yptr = &y;
    cout<<"Address of y in yptr : "<< yptr<<endl;           //  stored address of y in pointer variable yptr and printed

    int z = 50;
    cout<<"Address of z : "<< &z<<endl;                     //  address of z
    int * zptr = &z;                                        //  storing address of z in pointer variable zptr
    cout<<"Address of z in zptr : "<<zptr<<endl;            //  printing pointer variable
    cout<<"Address of zptr : "<< &zptr<<endl;               //  address of zptr
    int ** zzptr = &zptr;                                   //  (pointer to a pointer) storing address of "pointer variable zptr" into new "pointer variable zzptr"
    cout<<"Address of zptr in zzptr : "<< zzptr<<endl;      //  printing pointer variable zzptr

    return 0;
}