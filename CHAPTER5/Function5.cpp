//PASS BY VALUE - copy of an argument is passed to function

#include<iostream>
using namespace std;

int sum(int a, int b){
    a = a+5;
    b= b+5;
    return a+b;
}

int main(){
    int a =5, b =4;

    cout<<sum(a,b)<<endl;   //here this a and b are different from "sum" function's a & b, both (main{a,b} and sum{a,b}) has different address of storing in memory
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}