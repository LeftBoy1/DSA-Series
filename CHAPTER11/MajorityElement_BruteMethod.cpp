#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {1,1,2,2,1};
    int majority;    
    int n = arr.size();

    for(int i=0; i<n ; i++){
        int count = 0;

        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            majority = arr[i];
            break;
        }
    }
    cout << "Majority Element = " << majority;

    return 0;
}