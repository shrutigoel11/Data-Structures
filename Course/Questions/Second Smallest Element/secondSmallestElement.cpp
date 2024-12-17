#include <iostream>
#include <limits.h> 
using namespace std;

int secondSmallest(int arr[], int n) {
    if (n < 2) {  // If there are fewer than 2 elements, return -1
        return -1;
    }

    int Smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < Smallest) {
            secondSmallest = Smallest;
            Smallest = arr[i];
        } else if (arr[i] > Smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    // If secondSmallest is still INT_MAX, it means there is no second smallest element.
    if (secondSmallest == INT_MAX) {
        return -1;
    }

    return secondSmallest;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = secondSmallest(arr, n);
    if (ans == -1) {
        cout << "No second smallest element found." << endl;
    } else {
        cout << "Second Smallest element is: " << ans << endl;
    }

    return 0;
}
