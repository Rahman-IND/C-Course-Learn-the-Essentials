/*Challenge: Create a program to change values of variables.
1.  Declare an int variable named salary and assign the value 1500 to it.
2.  Print the variable.
3.  Change the value of the variable to 3000.
4.  Print the variable again in a new line. */

#include<iostream>
using namespace std;
int  main(){
    //  creating salary variable
    int salary = 1500;
    //  print salary varibale
    cout<<salary<<endl;

    //  change the value of salary variable from 1500 to 3000.
    salary = 3000;
    //  print salary variable
    cout<<salary;
    return 0;
}