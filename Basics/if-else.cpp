#include<iostream>
using namespace std;

int main(){

    char c;
    cout<<"Enter character: ";
    cin>>c;

    if(c >='a' && c<='z') {
        cout<<"Lowercase"<<endl;
    }
    else{
        cout<<"Uppercase"<<endl;
    }



//          OR
    
    cout<<"Enter character: ";
    cin>>c;

    if(c >=65 && c<=98) {
        cout<<"Uppercase"<<endl;
    }
    else{
        cout<<"Lowercase"<<endl;
    }




//          OR
    //(Using ASCII Code)
    int x;
    cout<<"Enter integer: ";
    cin>>x;

    if (x>=97 && x<=122){
        cout<<"Lowercase"<<endl;
    }
    else if(x>=65 && x<=90){
        cout<<"Uppercase"<<endl;
    }
    else{
        cout<<"Invalid ASCII Code"<<endl;
    }




}