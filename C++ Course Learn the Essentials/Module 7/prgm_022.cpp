/*Topic : Working with Loop statement*/

#include<iostream>
using namespace std;
int main(){
    // take 50 steps daily (steps counter)
    
    //  variable initialization
    int steps = 50;             //  total number of steps daily
    int curSteps = 1;           //  current steps
    //  while loop
    while (curSteps<steps)      //  Stopping criteria
    {
        cout<<curSteps<<": Take 1 more step."<<endl;        //  work that we want to repeat
        curSteps++;                                         //  update statement
    }
    cout<<steps<<": Great Job.";
    return 0;
}