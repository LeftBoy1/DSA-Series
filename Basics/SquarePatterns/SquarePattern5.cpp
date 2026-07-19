#include<iostream>
using namespace std;

int main(){
    int n =5;
    int num=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<<num;
            num+=1;
        }
        cout<<endl;
    }
    return 0;
}

// 01234
// 56789
// 1011121314
// 1516171819
// 2021222324