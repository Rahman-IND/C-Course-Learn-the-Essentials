/*Topic : Working with conditional statement*/

#include<iostream>
using namespace std;
int main(){
    int phone =15;  //  15k
    int Bnk_bal;
    string weather;

    cout<<"Enter your Bank Balance : "<<endl;
    cin>>Bnk_bal;
    cout<<"Enter the weather : "<<endl;             //  pleasant
    cin>>weather;

    if(phone<Bnk_bal){
        cout<<"Let's BUY the phone."<<endl;
    }
    if(weather =="pleasant"){
        cout<<"Let's go for Picnic."<<endl;
    }else{
        cout<<"Let's play some Indoor Games."<<endl;
    }

    return 0;
}