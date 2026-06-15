#include<iostream>
using namespace std;

int main(){

    int x;
    int i=1;
    cout<<"Enter Number: ";
    cin>>x;

    while(i<=x){
        cout<<i<<endl;
        i++;    //we also write -->  i = i + 1      ,    i+=1
    }
    
    

    //Horizontal Output
    while(i<=x){
        cout<< i<< " ";
        i++;
    }
    cout<<endl;

    return 0;
}