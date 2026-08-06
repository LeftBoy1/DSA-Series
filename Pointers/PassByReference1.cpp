#include<iostream>
using namespace std;

void Change_a(int *p){      //pass by reference using pointers
    *p = 20;
    cout<<endl;
}

int main(){
    int a = 10;
    
    Change_a(&a);
    
    cout<< "Inside main function: "<< a <<endl;
    
    return 0;
}