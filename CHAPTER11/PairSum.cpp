//Finding the pair sum which is equal to targeted value
    // Eg:- (7,2) is the pair and the targeted value is 9 
    //         So, (7,2) == 9

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {2,5,7,3,1,6};
    int n = vec.size();
    int target = 9;

    for(int i=0; i<n; i++){

        for(int j= i+1; j<n; j++){
            if(vec[i] + vec[j] == target){
                cout << "(" << vec[i] << ", " << vec[j] << ")" << endl;
            }
        }
    }


    return 0;
}