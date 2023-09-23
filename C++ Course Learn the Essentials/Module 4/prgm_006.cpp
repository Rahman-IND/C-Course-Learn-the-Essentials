/*Topic : Working woth sizeof operator*/

#include<iostream>
using namespace std;
int main() {
    //  initialization of variable
    int marks = 10;

    //  printing the size occupied by "marks" variable
    cout<< "The size of the variable "<<sizeof(marks) <<endl;

    //  printing the size occupied by dataType variables in byte
    cout<<"int = "<< sizeof(int) <<" bytes"<<endl;
    cout<<"float = "<< sizeof(float) <<" bytes"<<endl;
    cout<<"double = "<< sizeof(double) <<" bytes"<<endl;
    cout<<"char = "<< sizeof(char) <<" bytes"<<endl;
    cout<<"bool = "<< sizeof(bool) <<" bytes"<<endl;
    
    return 0;
}