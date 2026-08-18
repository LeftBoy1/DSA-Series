#include<iostream>
using namespace std;

int sumOf(int n){

    if(n == 1){
        return 1;
    }
    
    return n+sumOf(n-1);
}


int main(){
    int n;
    
    cout<<"Sum of Number: "<<sumOf(4);
    
    return 0;
}