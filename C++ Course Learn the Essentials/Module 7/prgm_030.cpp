/*Topic : Working with Continue statement*/

#include<iostream>
using namespace std;
int main(){
    int num=1;          //  variable initialization
    while (num<=20)     //  stopping criteria
    {
        if(num%7==0){   //  if "num" meets the skipping condition, "continue;" statement gets triggered and send back to loop.
            cout<<"It's a multiple of 7"<<endl;
            num = num + 1;  //  update statement for "num" if condition is valid.
            continue;   //  
        }
        cout<<num<<endl;
        num++;          //  num update statement (normal)
    }
    return 0;
}