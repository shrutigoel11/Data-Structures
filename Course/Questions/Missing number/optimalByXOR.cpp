#include <iostream>
using namespace std;

int missingNum(int arr[], int n) {
    int x1 = 1;  // XOR of all numbers from 1 to n
    int x2 = arr[0];  // XOR of all elements in the array
    
    // XOR all the numbers from 1 to n
    for (int i = 2; i <= n; i++) {
        x1 ^= i;
    }
    
    // XOR all the elements of the array
    for (int i = 1; i < n - 1; i++) {
        x2 ^= arr[i];
    }
    
    // The result is the missing number
    return x1 ^ x2;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int arr[n-1];
    cout << "Enter array elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    
    int ans = missingNum(arr, n);
    cout << "Missing number is: " << ans << endl;

    return 0;
}
