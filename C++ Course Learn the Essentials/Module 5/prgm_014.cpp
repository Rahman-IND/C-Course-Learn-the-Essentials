/*Topic : Relational Operators*/

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 5;

    cout<<" ----Relational Operator---- "<<endl;
    cout<<(a>b)<<endl;      //  Expected ans: 1
    cout<<(a<b)<<endl;      //  Expected ans: 0
    cout<<(a!=b)<<endl;     //  Expected ans: 1
    cout<<(a==b)<<endl;     //  Expected ans: 0
    cout<<(a<=10)<<endl;    //  Expected ans: 1
    cout<<(5>=b)<<endl;     //  Expected ans: 1

    cout<<"***value of A is "<<a<<" and B is "<<b<<"***"<<endl;
    //  Greater then
    if(a>b){
        cout<<"value of A is greater then B --> True "<<endl;
    }else{
        cout<<"value of A is not greater then B --> False"<<endl;
    }

    //  Less then
    if(a<b){
        cout<<"value of A is less then B --> False"<<endl;
    }else{
        cout<<"value of A is not less then B --> True"<<endl;
    }

    //  Not Equal To
    if(a!=b){
        cout<<"value of A is not equal to B --> True"<<endl;
    }else{
        cout<<"value of A is equal to B --> False"<<endl;
    }

    //  Less Then Equal To
    if(a<=10){
        cout<<"value of A is less then equal to 10 --> True"<<endl;
    }else{
        cout<<"value of A is not less then equal to 10 --> False"<<endl;
    }

    //  greater then Equal To
    if (a>=5){
        cout<<"value of A is greater then equal to 5 --> True"<<endl;
    }else{
        cout<<"value of A is not greater then equal to 5 -- False"<<endl;
    }
    return 0;
}