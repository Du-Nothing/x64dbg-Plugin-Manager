#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform a binary search on a sorted vector
int binarySearch(const vector<int>& data, int target) {
    int left = 0;
    int right = data.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (data[mid] == target)
            return mid;
        else if (data[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Element not found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> data(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    // Sort the input data in ascending order
    sort(data.begin(), data.end());

    int target;
    cout << "Enter the element you want to search for: ";
    cin >> target;

    int result = binarySearch(data, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the sorted data." << endl;
    }

    return 0;
}
