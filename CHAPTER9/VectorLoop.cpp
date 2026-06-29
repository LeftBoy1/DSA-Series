#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>vec1 = {'a','b','c','d','e'};
    vector<int>vec2 (5,0); 
    
    //For each Loop ---> the variable 'i' doesn't print index(0,1,2,....) but it prints the actual values inside the vector.
    for(char i: vec1){
        cout<<i<<endl;
    }
    
    cout<<endl;
    
    for(int i : vec2){
        cout<<i<<endl;
    }
    
    
    
    return 0;
}
