#include<iostream>
using namespace std;

int main(){
    int n=4;
 

    for(int i=0; i<n;i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        for(int j=0; j<n-i; j++){
            cout<<n+1;
            
        }
        cout<<endl;
    }
    return 0;
}



// 5555
//  555
//   55
//    5