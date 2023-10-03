/*Topic : Working with default values of parameters*/

#include<iostream>
using namespace std;
//  defining function
//  default value parameters should always be passed after non-default parameters
void playing_music(int SongId, float duration=10){          //  here we have given a default value to the variable 
    cout<<"Playing Song "<<SongId<<" For "<<duration<<" Minutes."<<endl;
}
int main(){
    playing_music(1,5.3);
    playing_music(2,2.2);
    playing_music(3);           //  here we haven't pass any value for parameter "duration" so it will take default value.
}