#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the target element: ";
    cin >> target;

    vector<int> indices = targetIndices(nums, target);

    if (indices.empty()) {
        cout << "No target indices found." << endl;
    } else {
        cout << "Target indices: ";
        for (int index : indices) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}
