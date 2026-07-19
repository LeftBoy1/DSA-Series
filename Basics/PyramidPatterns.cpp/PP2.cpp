#include<iostream>
using namespace std;
int main(){

    int n=9;

    for(int i=0; i<n; i++){
        //spaces : n-i-1
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }

        //num1 : i+1
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }

        //num2
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;
}


// num1 -
    //     1
    //    12
    //   123
    //  1234

//num2 -

            // 1
            // 21
            // 321
