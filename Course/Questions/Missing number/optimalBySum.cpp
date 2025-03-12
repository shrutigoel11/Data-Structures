#include <iostream>
using namespace std;

int missingNum(int arr[], int n) {
    // Calculate the sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;
    
    // Calculate the sum of the array elements
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }
    
    // The missing number is the difference between the total sum and the sum of the array
    return totalSum - arraySum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int arr[n-1];  // Array of size n-1
    cout << "Enter array elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    
    int ans = missingNum(arr, n);
    cout << "Missing number is: " << ans << endl;

    return 0;
}

