/*Topic : Working with reference variable*/

#include<iostream>
using namespace std;
int main(){
    int x =10;
    int &y = x;     //  reference variable y refers to variable x

    x++;
    cout<< x <<endl;    //  value of x increases and y also increases
    cout<< y <<endl;
    y++;
    cout<< x <<endl;    //  value of y increases and x also increases
    cout<< y <<endl;

    return 0;
}