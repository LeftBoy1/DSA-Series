// Subarray is the continues sub-part of an array
// Formula to calculate subarray is(s) = [n*(n+1)]/2 , where n is number of elements in an array 

//Ex:-
    // Arr[5] = {1,2,3,4,5}
    // then, Subarr = 1,2,3,4,5
    //                12,23,34,45
    //                123,234,345
    //                1234,2345
    //                12345
                        
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1 , 2 , 3 , 4 , 5};       //space is necessary between element bcz, subarrays like 1 2 appear as 12, 2 3 4 appears as 234, etc.

    for(int start=0; start<5; start++){

        for(int end = start; end<5; end++){
        
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}