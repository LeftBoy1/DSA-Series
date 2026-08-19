#include<iostream>
using namespace std;

int bs(int arr[], int target, int start, int end){
    
    int mid = (start+end)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] <= target){
        return bs(arr, target, mid+1, end);
    }

    else{
        return bs(arr, target, start, mid-1);
    }

    return -1;
}


int main ()
{
    int arr[] = {-1,0,3,7,9,12,13};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = bs(arr, target, 0, n - 1);

    cout << "Index: " << result << endl;
    return 0;
}