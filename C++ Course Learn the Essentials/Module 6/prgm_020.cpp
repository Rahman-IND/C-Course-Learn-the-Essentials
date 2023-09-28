/*Topic : working with conditional statement*/

#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter the Temperature : "<<endl;
    cin>>temp;
    //  Ternary Operator
    string weather = (temp>30) ? "Hot" : "Pleasent";
    cout<<"Today's weather is "<<weather<<endl;

    return 0;
}