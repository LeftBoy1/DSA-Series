#include<iostream>
using namespace std;

int main(){
    // Implicite TypeCasting - small datatype to big dataype
    char string = 'A';  //ASCII code of 'A' is 65
    int value = string;
    cout<<value<<endl;


    //Explicite TyepCasting - Big Datatypes to small datatype

    double price = 2.999999;
    int newprice = (int)price;
    cout<<newprice<<endl;

}