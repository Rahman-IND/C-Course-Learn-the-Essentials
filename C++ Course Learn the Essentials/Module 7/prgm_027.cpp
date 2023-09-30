/*Topic : Working with Do while Loop statement*/

#include<iostream>
using namespace std;
int main(){
    //  Read and print number until a negative number is entered.
    int num;
    do{
        cout<<"Enter the number : "<<endl;
        cin>>num;
        if(num>=0){
            cout<<"Entered number is  : "<<num<<endl;
        }else{
            cout<<"The number you have entered is negative."<<endl;
        }
    }while(num>=0);
    cout<<"/// EXIT FROM THE LOOP ///"<<endl;
}