/*Topic : working with Conditional Statement */

#include<iostream>
using namespace std;
int main(){
    //  If-else statement
    int Bnk_Bal, moneyReq;
    cout<<"Enter your Bank Balance : "<<endl;
    cin>>Bnk_Bal;
    cout<<"Enter the money required for the Item : "<<endl;
    cin>>moneyReq;

    if(moneyReq<Bnk_Bal){
        cout<<"Let's BUY the Item now."<<endl;
    }else{
        cout<<"Let's wait for SALE"<<endl;
    }
    cout<<"Thank you for Shopping."<<endl;

    return 0;
}