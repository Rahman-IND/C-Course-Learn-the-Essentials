/*Topic : Working with passing by reference */

#include<iostream>
using namespace std;
//  defining function
int moneyfunct(int *moneyptr){      //  (pointer variable) ( *moneyptr = &money)
    cout<< moneyptr<<endl;          //  printing what is stored in this pointer
    (*moneyptr) = 2*(*moneyptr);    //  dereference operator
    cout<< *moneyptr<<endl;         //  printing what is store in the  original address that the pointer is pointing 
    return 0;
}
int main(){
    int money=10;                   //  variable initialized
    cout<< &money<<endl;            //  address of money variable (address of operator)

    //  pass by reference using pointer variable
    moneyfunct(&money);             //  function call and passing parameter (address of "money" variable)
    cout<<"Main : "<<money<<endl;

    return 0;
}