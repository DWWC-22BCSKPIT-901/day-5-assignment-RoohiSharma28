#include <iostream>
#include <vector>
using namespace std;

bool isPresent(const vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k) {
            return true; 
        } else if (arr[mid] < k) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return false; 
}

int main() {
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the sorted array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the integer to search for (k): ";
    cin >> k;

    if (isPresent(arr, k)) {
        cout << k << " is present in the array." << endl;
    } else {
        cout << k << " is not present in the array." << endl;
    }

    return 0;
}
