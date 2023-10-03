/*Topic : Working with function returning value*/

#include<iostream>
using namespace std;

//  defining function
int Factorial(int num){
    int i, ans=1;
    for(i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;         //  returning value to function call
}

int main(){
    int intNum;
    cout<<"Enter the number for factorial : "<<endl;
    cin>>intNum;                                        //  passing value to the parameters
    cout<<"The factorial of "<<intNum<<" is : "<<Factorial(intNum)<<endl;       //  function call
}