#include<iostream>
using namespace std;

int main(){
    
    //Pointer - stores the address of another variable
    int a = 10;
    int *p = &a;

    cout<< &a <<endl;       //address of a
    cout<< p <<endl;        //value of a
    cout<< &p <<endl;       //address of p
    cout<<endl;
    cout<< *(&a) <<endl;    //stored value of &a
    cout<< *(p) <<endl;    //stored value of p
    cout<<endl;


    //Pointer to Pointer - stores the address of other pointer
    int **p1 = &p;
    cout<< p1 <<endl;       //address of p
    cout<<endl;

    //Null Pointer - A pointer that doesn't point to any location
    int *p2 = NULL;
    cout<< p2 <<endl;
    return 0;
}


//  * -->> Dereference Operator(it helps to get a value stored on a address)