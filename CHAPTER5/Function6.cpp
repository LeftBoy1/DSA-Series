//PASS BY VALUE - copy of an argument is passed to function

#include<iostream>
using namespace std;

int changeX(int x){
    x = 2*x;
    cout<<"x in changeX: "<<x<<endl;
}

int main(){
    int x =5;

    cout<<"x in main: "<< x << endl;
    return 0;
}
//Both x has different addresses.