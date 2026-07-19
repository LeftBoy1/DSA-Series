// It reduces the line of code in if-else statement , but only uses when one if and one else statement are present
// SYNTAX - 
        // condition?strr1:strr2;

#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter age: ";
    cin>>x;

    cout<< (x>=18? "Eligible To Vote" : "Not Eligible To Vote")<<endl;
    return 0;
}