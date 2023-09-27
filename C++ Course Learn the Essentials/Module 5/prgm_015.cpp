/*Topic : Bitwise Operators*/

#include<iostream>
using namespace std;
int main(){
    cout<<" ---Bitwise Operator--- "<<endl;
    //  Bitwise And (&)
    cout<<(5&7)<<endl;      //  Expected : 5
    cout<<(5&3)<<endl;      //  Expected : 1
    //  Bitwise OR (|)
    cout<<(5|2)<<endl;      //  Expected : 7
    cout<<(5|8)<<endl;      //  Expected : 13
    //  Bitwise XOR (^)
    cout<<(5^1)<<endl;      //  Expected : 4
    cout<<(6^4)<<endl;      //  Expected : 2
    //  Bitwise 1's compliment (~)
    cout<<(~0)<<endl;       //  Expected : -1
    cout<<(~5)<<endl;       //  Expected : -6
    cout<<(~-3)<<endl;      //  Expected : 2
    //  Bitwise left shift (<<)
    int num1 = 53;
    cout<<(num1<<2)<<endl;  //  Expected : 212
    cout<<(num1<<3)<<endl;  //  Expected : 424
    //  Bitwise right shift (>>)
    int num2 = 49;
    cout<<(num2>>2)<<endl;  //  Expected : 12
    cout<<(num2>>3)<<endl;  //  Expected : 6
    
    return 0;
}