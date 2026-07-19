#include<iostream>
using namespace std;

// Parametres is the copy of argument while argument is the actual value written in main function.
int sumFunc(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    cout<<sumFunc(3,7);
    return 0;
}