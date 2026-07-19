//Finding Maximum sum of subarray using Kadane's algorithm

#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[7] = {3 , -4 , 5 , 4 , -1 , 7 , -8};

    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i=0; i<7 ; i++){
        
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "Maximum Subarray Sum = " << maxSum << endl;
    return 0;
}