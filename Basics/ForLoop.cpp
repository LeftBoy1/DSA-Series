#include<iostream>
using namespace std;

int main(){
    int x ;
    cout<<"Enter Number: ";
    cin>>x;

    for(int i=1; i<=x; i=i+2){
        cout<<i<<endl;
    }
    return 0;
}