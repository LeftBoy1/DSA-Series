#include<iostream>
#include<string>
using namespace std;

int main(){
    
    #1
    string str = "Devansh Gupta";       
    cout<<str<<endl;

    str = "LeftBoy";        //we can change the string(dynamic and contiguous in nature) 
    cout<<str<<endl;

    
    #2 //Concatenation
    string str1 = "Devansh";
    string str2 = "Gupta";
    cout<<str1+str2<< endl;


    #3 //Input
    string x ;
    cout<<"Enter: ";
    getline(cin, x);    //takes input of whole string 

    cout<<x<<endl;


    #4 //String in Loop
    string b = "Devansh";
    for(int i=0; i< b.length(); i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}