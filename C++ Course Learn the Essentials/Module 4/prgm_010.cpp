/*Topic : Average of number*/
//Qn.  find the average of 5 numbers and print the output upto 4 decimal places

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a,b,c,d,e;              //  declaration of variable
     cout<<"Enter the value of the variables : "<<endl;
     cin>>a>>b>>c>>d>>e;        //  taking user-input for the variables

    float Avg = ((a+b+c+d+e)/5.0);
    cout<<"The average of 5 numbers is : "<< fixed<< setprecision(4) <<(float)Avg;         //  fixed << setprecision(4) --> allows to get answer upto 4 decimal places

    return 0;
}