#include<iostream>
using namespace std;


void Change_b(int &b){      //pass by reference using alias
    b = 30;
}

int main(){

    int a = 10;
    Change_b(a);

    cout<<"Inside the main function: "<< a << endl;
    return 0;
}