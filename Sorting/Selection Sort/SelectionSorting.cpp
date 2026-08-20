#include<iostream>
using namespace std;

void SelSort(int arr[], int n){
    
    for(int i=0; i<= n-1; i++){
        int smallestIDX = i;
        
        for(int j= i+1; j<n; j++){

            if(arr[j] < arr[smallestIDX]){
                smallestIDX = j;
            }
        }

        swap(arr[i], arr[smallestIDX]);
    }
}

int main(){

    int arr[5] = {2,56,23,89,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    SelSort(arr,n);

    for(int i=0; i<n ; i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}