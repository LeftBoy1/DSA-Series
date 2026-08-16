#include<iostream>
using namespace std;

void printNum(int x){

    if(x == 1){
        cout<<"1\nDone\n";
        return ;
    }
    cout<<x<<endl;

    printNum(x-1);
}
int main(){
    
    printNum(4);
    printNum(5);
    printNum(6);

    return 0;
}