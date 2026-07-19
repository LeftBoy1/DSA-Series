#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec1 = {1,2,3,4,5};
    vector<int>vec2 (5,0);       // vector<int>vec(size_of_vector, value_assign_to_every_index)

    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;
    cout << vec1[3] << endl;
    cout << vec1[4] << endl;
    
    cout<<endl;

    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;
    cout << vec2[3] << endl;
    cout << vec2[4] << endl;

    return 0;
}