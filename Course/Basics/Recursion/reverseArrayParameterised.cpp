#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int l, int r, int arr[]) {
    if (l >= r) return;
    swap(arr[l], arr[r]);
    reverse(l + 1, r - 1, arr);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    reverse(0, 3, arr);

    // Printing the array values, not the index
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";  // Print the array elements, not the index
    }

    return 0;
}
