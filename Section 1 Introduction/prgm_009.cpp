/*Topic: Value of One Variable to Another*/

#include<iostream>
using namespace std;
int main(){
    //  creating number1 variable
    int number1 =74;
    //  printing number1 variable
    cout<<number1<<endl;

    int number2 = 243;

    //  assign value stored in number2 to number1
    number1 = number2;
    //  print number1 variable
    cout<<number1;
    return 0;
}