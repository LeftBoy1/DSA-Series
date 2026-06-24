#include<iostream>
using namespace std;

int main(){
    int arr[6]= {1,2,3,4,5,6};
    int start=0, end = 5;
    while(start < end){
        swap(arr[start], arr[end]);     //2 pointer approach

        start++;
        end--;
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}

//swap(value1, value2) is a function used to swap the elements