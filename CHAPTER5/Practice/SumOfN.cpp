#include<iostream>
using namespace std;

int SumOf(int n){
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}


int main(){

    cout<<"Sum = "<<SumOf(2);
    cout<<"Sum = "<<SumOf(6)<<endl;
    cout<<"Sum = "<<SumOf(54)<<endl;
    cout<<"Sum = "<<SumOf(62)<<endl;
    cout<<"Sum = "<<SumOf(10)<<endl;

    return 0;
}