#include<iostream>
using namespace std;

int main(){
    int a = 3, b= 4;
//Arithmetic Operator 
    cout<<"Sum: "<<a-b<<endl;
    cout<<(3>9)<<endl;

// NOT Operator{!} - changes true into false or false into true
    cout<< !(3>9)<<"\n"<<endl;
        // This says True(1) because Not operator(!) converts false into true

// Increament/Decreament Operator or Unary Operator
    int x = 10;
    int y = x++;
    cout<<y<<endl;
    cout<<x<<"\n"<<endl;

    int p = 5;
    int q = ++p;
    cout<<q<<endl;
    cout<<p<<endl;
   

    return 0;
}