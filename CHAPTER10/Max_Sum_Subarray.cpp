// Finding Maximum Sum of Subarray (Brute Force)

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[7] = {3, -2, -3, 4, -5, 7, 1};
    int n = 7;

    int max_Sum = INT_MIN;

    for (int start = 0; start < n; start++) {

        int current_Sum = 0;

        for (int end = start; end < n; end++) {

            current_Sum += arr[end];
            max_Sum = max(current_Sum, max_Sum);

        }
    }

    cout << "MAX SUM: " << max_Sum << endl;

    return 0;
}