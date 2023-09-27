/*Topic : working with If-statement */

#include<iostream>
using namespace std;
int main(){
    int Bnk_bal;
    int moneyReq;
    //  user-input
    cout<<"Enter your bank Balance : "<<endl;
    cin>>Bnk_bal;                               //  90 (90K)
    cout<<"Enter money required : "<<endl;
    cin>>moneyReq;                              //  75 (75k)
    //  if-statement
    if(moneyReq<Bnk_bal){
        cout<<"Lets's Buy the Item."<<endl;
    }
    cout<<"Thanks for Shopping"<<endl;
    return 0;
}