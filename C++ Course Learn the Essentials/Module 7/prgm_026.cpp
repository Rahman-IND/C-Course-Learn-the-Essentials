/*Topic : Working with Do while Loop Statement*/

#include<iostream>
using namespace std;
int main(){
    int money;
    cout<<"Enter the amount of money you have : "<<endl;
    cin>>money;                 //  trying entring 500 or 1000 
    do{
        cout<<"Shopping with Rs."<<money<<endl;
        money = money - 100;
    }
    while(money>0);             //  exit condition (when the condition is meet, it will exit the loop)
    cout<<"You have "<<money<<" money now. Thank You for Shopping."<<endl;
}