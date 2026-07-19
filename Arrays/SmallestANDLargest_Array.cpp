#include<iostream>
using namespace std;

int main(){
    int num[6] = {1,9,-6,2,3,6};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i=0; i<6; i++){
        //finding smallest array
        if(num[i]< smallest){
            smallest = num[i];
        }

        //finding largest array
            //we can also use max , min function 
        largest = max(num[i], largest);
    }
    
    
    
    cout<<"Smallest element in array: "<<smallest<<endl;
    cout<<"Largest element in array: "<<largest<<endl;
    
    return 0;
}


// INT_MAX is a prebuilt logic which says the maximum number(positive infinity)
// INT_MIN is a prebuilt logic which says the minimum number(negative infinity)

// min() is the pre-defined function which tells the smallest value
    // Ex: min(num[i], smallest)
// max() is the pre-defined function which tells the largest value