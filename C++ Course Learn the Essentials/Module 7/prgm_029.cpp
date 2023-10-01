/*Topic : working with Break statement*/

#include<iostream>
using namespace std;
int main(){
    int i, num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
        cout<<"It's a prime number."<<endl;
    }else{
        cout<<"It's not a prime number."<<endl;
    }
}