#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> orderMap;
    
    for (int i = 0; i < arr2.size(); ++i) {
        orderMap[arr2[i]] = i;
    }

    sort(arr1.begin(), arr1.end(), [&](int a, int b) {
        if (orderMap.count(a) && orderMap.count(b)) {
            return orderMap[a] < orderMap[b];
        }
        if (orderMap.count(a)) {
            return true;
        }
        if (orderMap.count(b)) {
            return false;
        }
        return a < b;
    });

    return arr1;
}

int main() {
    int n1, n2;

    cout << "Enter the size of arr1: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of arr1:\n";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of arr2: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of arr2:\n";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    vector<int> sortedArr = relativeSortArray(arr1, arr2);

    cout << "Sorted array:\n";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
