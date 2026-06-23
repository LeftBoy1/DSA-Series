#include<iostream>
using namespace std ;

int main(){

    int arr[5] = {3,4,5,6,7};
    int x[] = {4,5,6,7,8,9,2,1,0};

    cout<<arr[0]<<endl;
    
    //Size of an array
    cout<<sizeof(arr) / sizeof(int) <<endl;     //     20Bytes/4Bytes
    
    return 0;
}