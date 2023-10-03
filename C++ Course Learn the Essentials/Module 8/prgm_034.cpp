/*Topic : working with function with return value*/

#include<iostream>
using namespace std;
//  defining a function
int add(int x, int y){
    return (x+y);           //  function return's value to function call
}
int main(){
    int a,b;
    cout<<"Enter the value of A : "<<endl;
    cin>>a;
    cout<<"Enter the value of B : "<<endl;
    cin>>b;

    //  function call
    int result = add(a,b);
    cout<<"The Sum of A and B is : "<<result<<endl;
}