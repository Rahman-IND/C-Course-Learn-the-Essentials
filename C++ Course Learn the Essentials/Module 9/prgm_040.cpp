/*Topic : working with null pointer */

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *xptr = &x;
    cout<< xptr<<endl;

    //  declaring null pointer (it dont point to anything)(no garbage value)
    int *yptr = NULL;
    int *zptr = 0;

    if(zptr==NULL){
        cout<<"zptr is NULL "<<endl;
    }
    if(yptr==NULL){
        cout<<"yptr is NULL"<<endl;
    }
    return 0;
}