#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void alterElements(int arr[], int n){
    // Arrays to store positive and negative elements
    int pos[n], neg[n];
    int posIndex = 0, negIndex = 0;

    // Separate positive and negative elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[posIndex++] = arr[i]; // Store positive numbers
        } else {
            neg[negIndex++] = arr[i]; // Store negative numbers
        }
    }

    // Merge back into the original array in alternating pattern
    int i = 0, j = 0, k = 0;
    while (i < posIndex && j < negIndex) {
        arr[k++] = pos[i++];  // Positive element first
        arr[k++] = neg[j++];  // Negative element next
    }
}

int main() {
    int n;
    cout << "Enter even size of array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    alterElements(arr, n);

    cout << "The array elements after alterations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
