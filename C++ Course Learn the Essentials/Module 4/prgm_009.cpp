/*Topic : Explicit Typecasting*/

#include<iostream>
using namespace std;
int main() {
    int x = 5.65;
    cout<< x<<endl;
    cout<<(float)x/3<<endl;         //  output will be in float dataType
    
    char letter = 'A';
    cout<< letter<<endl;
    cout<< (letter+1)<<endl;        //  output will be in Integer since int > char
    cout<< (char)(letter+1)<<endl;  //  output will be in char dataType
    
    bool Ag = true;
    cout<< Ag<<endl;
    cout<< (bool)Ag+1<<endl;
    
    return 0;
}