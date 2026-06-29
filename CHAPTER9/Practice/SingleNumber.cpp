// Ques:- Given an array of integers where every element appears exactly twice except one element, find the element that appears only once.
// Input:  [1, 2, 2, 4, 1]
// Output: 4


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 4, 1};

    int ans = 0;

    for (int i : nums) {
        ans ^= i;          //  ans = ans^i;
    }

    cout << ans;

    return 0;
}