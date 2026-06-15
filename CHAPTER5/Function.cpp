#include<iostream>
using namespace std;

// SYNTAX - 
// returnType Func_Name(){}
// returnType --> we can use, int,float,double,char,bool, when function return something but if it doesnt return anything then we use "void."

void firstFunc(){
    cout<<"Hi\n";   //dosent return anything
}

int main(){
    firstFunc();
    cout<<"Main Function";
    return 0;       //return value

}