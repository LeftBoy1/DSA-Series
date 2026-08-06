// Binary Search Using RECURSION

#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {


    if (start > end) {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    if (target > arr[mid]) {
        return binarySearch(arr, mid + 1, end, target);
    }
 
    return binarySearch(arr, start, mid - 1, target);
}

int main() {

    int arr[] = {-1, 0, 1, 4, 7, 12, 16};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Number is not in the list" << endl;
    }

    return 0;
}