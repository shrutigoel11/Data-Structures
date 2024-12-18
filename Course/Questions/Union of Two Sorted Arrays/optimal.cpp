#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unionArray(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;
    vector<int> unionArr;

    // Merge the arrays, avoiding duplicates
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (unionArr.empty() || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        } else {
            // If both are equal
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    int n1, n2;

    cout << "Enter size of array 1: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter array elements: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter array elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Sorting arrays
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    // Get the union of the two arrays
    vector<int> unionArr = unionArray(arr1, n1, arr2, n2);

    // Output the union array
    cout << "Union of arrays: ";
    for (auto i : unionArr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
