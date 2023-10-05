/*Topic : Working with pass by reference using reference variable*/

#include<iostream>
using namespace std;
//  defining function
void FuntMoney(int &myMoney){               //  int &myMoney = money; <--- this is happening here
    myMoney = 2 * myMoney;                  //  pass by reference using reference variable
    cout<<"myMoney is : "<< myMoney<<endl;
}

int main(){
    int money = 10;
    FuntMoney(money);                       //  function call
    cout<<"money : "<< money<<endl;         //  whatever changes made in reference variable, it will take place in original variable too.

    return 0;
}