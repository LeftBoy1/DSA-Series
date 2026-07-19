#include<iostream>
using namespace std;

int factFunc(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;

}

int main(){
    cout<<factFunc(6)<<endl;
    cout<<factFunc(7)<<endl;
    cout<<factFunc(5)<<endl;
    cout<<factFunc(4)<<endl;
    cout<<factFunc(3)<<endl;
    return 0;
}