// num = 145
//  then, 1+4+5 = 10

#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int digitSum = 0;
    
    while(num>0){
        int lastdigit = num%10;
        num = num/10;   //or we can write -->  num/=10

        digitSum += lastdigit;
    }
    return digitSum;
}

int main(){
    cout<<"Sum: "<<sumOfDigit(145)<<endl;
    return 0;
}