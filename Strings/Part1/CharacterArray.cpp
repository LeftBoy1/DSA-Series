// '\0' ----> null character

// In memory -
    // '\n' = 1bit
    // '\0' = 1bit

// cin.getline(arrayName, arrayLenght, delimi?)


#include<iostream>
using namespace std;

int main(){
    #1
    char x[] = {'a','b','c','d', '\0'};         //characters 
    cout<<x<<endl;

    #2
    char y[] = "Hello"; //string literals --->which can not changed
    cout<<y<<endl;
    cout<<y[0]<<endl;
    cout<<y[4]<<endl;

    #3
    char p[100];
    cout<<"Enter string (p): ";
    cin.getline(p, 100);        //takes input upto length of an array 
    cout<<p<<endl;

    #4
    char z[14];
    cout<<"Enter string (z): ";
    cin.getline(z, 14);        
    for(char ch : z){
        cout<<z<<" ";

    }
    cout<<endl;

    #5
    char a[100];
    cout<<"Enter char (a): ";
    cin>>a;     //take only one character input
    cout<<a<<endl;

    #6 //(Finding Length of String)
    char b[] = "Devansh Gupta";
    int len = 0;

    for(int i=0 ; b[i] != '\0' ; i++){
        len++;
    }
    cout<<"Length of string (b): "<<len<< endl;

    return 0;
}