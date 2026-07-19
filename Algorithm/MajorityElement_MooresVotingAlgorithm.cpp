#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,1,2,2,1};
    int ans;    
    int n = arr.size();


    for(int i=0; i<n; i++){
        int frequency = 0;

        for(int j=0; j<n; j++){

            if(frequency == 0){
                ans = arr[i];
            }
            if(ans == arr[i]){
                frequency++;
            }
            else{
                frequency--;
            }
        }
    }
    cout << "Majority Element = " << ans;

    return 0;
    
}