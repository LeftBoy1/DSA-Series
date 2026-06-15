// Floyd's Triangle Pattern

#include<iostream>
using namespace std;

int main()
{
    int n=6;
    int num =1;

    for(int i=1; i<n;i++){
        for(int j=1; j<i; j++){
            cout<<num;
            num+=1;
        }
        cout<<endl;
    }
    return 0;

}


// 1
// 23
// 456
// 78910