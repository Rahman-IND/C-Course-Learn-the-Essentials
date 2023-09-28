/*Topic : Working with conditional statement*/

#include<iostream>
using namespace std;
int main(){
    //  student grade system
    //  Marks       Grade
    //  81-100  =   A
    //  61-80   =   B
    //  41-60   =   C
    //  <=40    =   D
    int marks;
    cout<<"Enter the marks : "<<endl;
    cin>>marks;
    //  if-else statement
    if(marks>=81){
        cout<<" Grade : A "<<endl;
    }else if(marks>=61){
        cout<<" Grade : B "<<endl;
    }else if(marks>=41){
        cout<<" Grade : C "<<endl;
    }else if(marks>=30){
        cout<<" Grade : D "<<endl;
    }else{
        cout<<" Fail "<<endl;
    }

    return 0;
}