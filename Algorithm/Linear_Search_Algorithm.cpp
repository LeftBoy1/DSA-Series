#include<iostream>
using namespace std;

int main(){
    int arr[8] = {4,56,99,12,5,66,34,82};
    int target = 12;

    for(int i=0; i<8; i++){
        if(arr[i] == target){
            cout<<"Found at index: "<<i<<endl;
            return 0; //exits the program and returns an exit code to the operating system
        }
    }

    cout<<"Not Found"<<endl;
 
    return 0;
}