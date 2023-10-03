/*Topic : Working with functions with parameters*/

#include<iostream>
using namespace std;

//  defining function
void playing_music(int SongId, double duration){            //  inside () are parameters/Local variables
    cout<<"Playing Song "<<SongId<<" for "<<duration<<" Minutes."<<endl;
}
int  main(){
    //  calling function
    playing_music(1,5.3);       //  inside () are arguments, these are passed to the parameters that are declared during function declaration.
    playing_music(2,3.8);
    playing_music(3,6.9);
}