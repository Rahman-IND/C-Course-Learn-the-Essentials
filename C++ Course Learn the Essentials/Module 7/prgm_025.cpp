/*Topic : Working with For Loop Statement*/

#include<iostream>
using namespace std;
int main(){
    //  Read n numbers and Find the sum of even numbers
    int n, num1;
    int sum=0;
    cout<<"Enter how many numbers will it take : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        //  read the numbers
        cout<<"Enter "<<i<<" number : "<<endl;
        cin>>num1;
        if(num1%2==0){              //  to check the number entered is Even or Odd
            sum = sum + num1;       //  only Even numbers gets add up
        }
    }
    cout<<"The sum of even numbers are : "<<sum<<endl;

    return 0;
}