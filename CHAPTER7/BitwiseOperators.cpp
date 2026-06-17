// AND Operator(&) - 
//                     0&0 =0
//                     0&1 =0
//                     1&0 =0
//                     1&1 =1


// OR Operator(|) - 
//                     0|0 =0
//                     0|1 =1
//                     1|0 =1
//                     1|1 =1


// XOR(Exclusive OR) Operator{^} -
//                     0^0 =0
//                     1^1 =0
//                     0^1 =1
//                     1^0 =1


// LeftShift Operator(<<)- Basically, binary digits shift left side
//      Example - 10<<2
//              here, 10 = 1010 in binary but we have to add 2 zeroes in the last of binary number because its 10<<2
//              So, 10100 is the answer (in decimal = 20)


// RightShift Operator(>>)- Same as LeftShift Operator but numbers shifts towardsd right side 
//      Example - 10>>1
//              here, 10 =1010 in binary but after shifting right side(2 times) its will be 101 or 0101
//              the last digit will disappear




#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int a=4, b=8, x=10,y=1;

    cout<<"AND: "<< (a&b) <<endl;
    cout<<"OR: "<< (a|b) <<endl;
    cout<<"XOR: "<< (a^b) << "\n" <<endl;

    cout<<"LeftShift: "<< (10<<1) <<endl;
    cout<<"RightShift: "<< (10>>1) << "\n" <<endl;

    cout<<"LeftShift(Formula): "<< (x * pow(2,y)) <<endl;
    cout<<"RightShift(Formula): "<< (x / pow(2,y)) <<endl;

    return 0;
}

// Here 4 = 100 and 8 = 1000 in binary so after adding both binary numbers according to AND,OR, operators it produce output
// Example - 0100 & 1000 = 0000 = 0
//           0100 | 1000 = 1100 = 12
//           0100 ^ 1000 = 1100 = 12
