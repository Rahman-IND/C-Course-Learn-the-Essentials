/*Topic : Working with Loop Statement*/

#include<iostream>
using namespace std;
int main(){
    //  read n numbers and find there sum
    int n;
    int i=1;
    int sum=0;
    int num;
    cout<<"How many number will it take : "<<endl;
    cin>>n;                                         //  this input will be the number of time the loop will run.
    //  while loop statement
    while (i<=n)
    {
        cout<<"Enter "<<i<<" number is : "<<endl;
        cin>>num;
        sum = sum + num;
        i++;
    }
    cout<<"The sum is : "<<sum<<endl;
}