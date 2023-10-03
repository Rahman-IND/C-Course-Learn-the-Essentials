/*Topic : Working with function overloading */

#include<iostream>
using namespace std;
//  function declaration
int area ( int l, int b){
    cout<<"/// Rectangle ///"<<endl;
    return(l*b);
}

int area(int l){
    cout<<"/// Square ///"<<endl;
    return (l*l);
}

int main(){
    // function call
    cout<<area(5)<<endl;        // function called

    cout<<area(3,5)<<endl;      //  function overload using parameters
}