#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(const vector<int>& arr, int k) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == k) {
            return i + 1; 
        }
    }
    return -1; 
}

int main() {
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the integer to find (k): ";
    cin >> k;

    int position = findFirstOccurrence(arr, k);

    if (position != -1) {
        cout << "The position of the first occurrence of " << k << " is: " << position <<endl;
    } else {
        cout << k << " is not present in the array.\n";
    }

    return 0;
}
