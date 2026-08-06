// Binary Search only works on sorted arrays

#include<iostream>
using namespace std;

int main(){
    int arr[] = {-1,0,3,7,9,12,13};        //odd array
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    int start=0, end = n-1;
    
    while(start <= end){
        int mid = (start+end)/2;

        if( target > arr[mid]){
            start = mid+1;

        }

        else if (target < arr[mid]){
            end = mid-1;

        }

        else{
            cout << "Element found at index: " << mid << endl;
            return 0; 
        }
    }
    cout<<"Number is not in the list"<<endl;



    return 0;
}