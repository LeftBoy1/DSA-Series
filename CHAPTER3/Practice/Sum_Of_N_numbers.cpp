#include<iostream>
using namespace std;

int main(){
    int n;
    int sum;
    cout<<"Enter Number:";
    cin>>n;

    for(int i =0; i<=n; i++){
        sum = sum+i;
    }
    cout<<"Sum: "<<sum; 
    
    return 0;
}