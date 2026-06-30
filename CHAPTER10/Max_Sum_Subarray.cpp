//Finding Maximum sum of subarray
                       
#include<iostream>
using namespace std;

int main(){
    int arr[7] = {3 , -2 , -3 , 4 , -5 , 7 , 1};
    int max_Sum = INT_MIN;

    for(int start=0; start<5; start++){
        int current_Sum = 0;
        for(int end = start; end<5; end++){
            
            current_Sum += arr[end];
            max_Sum = max(current_Sum, max_Sum);
            
        }  
    }
    cout<<"MAX SUM: "<< max_Sum<< endl;

    return 0;
}