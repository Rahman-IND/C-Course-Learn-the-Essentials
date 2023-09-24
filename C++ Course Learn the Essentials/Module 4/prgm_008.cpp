/*Topic : Implicit Typecasting */

#include<iostream>
using namespace std;
int main() {
    //  Typecasting --> change of resulting datatype
    //  Priorities --> float > int > char > bool

    cout<< (5/3)<<endl;             //output will be in Integer datatype
    cout<< (5/3.0)<<endl;           //output will be in float datatype (int/float)
    cout<< (5.0/3)<<endl;           //output will be in float datatype (float/int)
    
    char letter = 'A';
    cout<< letter<<endl;            //output will be letter stored in char dataType variable
    cout<< (letter + 1)<<endl;      //output will be in int dataType (int > char) [A = 65 (ASCII)]
    letter = (letter + 1);          //[A = 65 + 1 = 66 = B]
    cout<< letter<<endl;            //output will be letter 'B'

    char ch = 67;
    cout<< ch<<endl;                //output will be char dataType and letter 'C'

    cout<< (false+5)<<endl;        //output will be in integer value (int > bool)
    cout<< (true+5)<<endl;         //output (true = 1 + 5 = 6)

    return 0;
}