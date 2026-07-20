// '\0' ----> null character

// In memory -
    // '\n' = 1bit
    // '\0' = 1bit

// cin.getline(arrayName, arrayLenght, delimi?)


#include<iostream>
using namespace std;

int main(){
    char x[] = {'a','b','c','d', '\0'};         //characters 
    cout<<x<<endl;

    char y[] = "Hello"; //string literals --->which can not changed
    cout<<y<<endl;
    cout<<y[0]<<endl;
    cout<<y[4]<<endl;

    char p[100];
    cout<<"Enter string: ";
    cin.getline(p, 100);        //takes input upto length of an array 
    cout<<p<<endl;

    char z[100];
    cout<<"Enter char: ";
    cin>>z;     //take only one character input
    cout<<z<<endl;

    return 0;
}