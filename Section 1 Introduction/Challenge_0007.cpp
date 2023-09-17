/*Challenge: Create a program to assign the value of one variable to another.
1.  Create a variable named distance with value 134.
2.  Print the distance variable.
3.  Create another variable named distance2 with value 564.
4.  Assign the value of distance2 to the distance variable.
5.  Print the distance variable again in the new line. */

#include<iostream>
using namespace std;
int main(){
    int distance = 134;
    cout<<distance<<endl;

    int distance2 = 564;
    distance = distance2;
    
    cout<<distance;
    return 0;
}