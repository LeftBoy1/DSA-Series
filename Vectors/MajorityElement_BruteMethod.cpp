#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {1,1,2,2,1};
    int ans;    
    int n = arr.size();

    for(int i=0; i<n ; i++){
        int frequency = 0;

        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                frequency++;
            }
        }
        if(frequency > n/2){
            ans = arr[i];
            break;
        }
    }
    cout << "Majority Element = " << ans;

    return 0;
}