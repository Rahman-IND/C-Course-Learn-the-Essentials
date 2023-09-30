/*Topic : Working with Break statement*/

#include<iostream>
using namespace std;
int main(){
    //  make a loop for buring 50 calories but your mom calls and you have to stop at 10 calories.
    int cal = 1;
    int mom_calls = 10;             //  breaking criteria
    while(cal<50){                  //  initial stopping condition
        cout<<"Running and buring : "<<cal<<endl;
        if(cal==mom_calls){         //  condition for breaking the loop
            break;
        }
        cal = cal +1;
    }
    cout<<"Workout is complete :"<<cal<<endl;
}