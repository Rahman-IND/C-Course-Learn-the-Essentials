/*Topic : Working with Additional dataTypes (data modifiers) */

#include<iostream>
using namespace std;
int main(){
    //  variables declaration and initialization
    long long int num1 = 121314151617181911;
    int num2 = num1;
    short int num3 = 12131;

    //  printing the variables
    cout<<"Number stored in num1 is : "<< num1<<endl;
    cout<<"Number stored in num2 is : "<< num2<<endl;
    cout<<"Number stored in num3 is : "<< num3<<endl;

    //  printing the size occupied by each DataTypes in memory.
    cout<<"long long int = "<< sizeof(long long int)<<" bytes"<<endl;
    cout<<"int = "<< sizeof(int)<<" bytes"<<endl;
    cout<<"short int = "<< sizeof(short int)<<" bytes"<<endl;

    return 0;
}