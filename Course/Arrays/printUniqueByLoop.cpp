#include <iostream>
using namespace std;

void uniqueElement(int arr[], int n) {
    // Step 1: Count occurrences of each element using a nested loop
    for(int i = 0; i < n; i++) {
        bool isUnique = true;  // Flag to track if arr[i] is unique
        
        // Check for duplicates of arr[i] in the rest of the array
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {  // If arr[i] is equal to arr[j] and not the same element
                isUnique = false;
                break;  // If a duplicate is found, no need to check further
            }
        }
        
        // If the element is unique, print it
        if(isUnique) {
            cout << "Unique element: " << arr[i] << endl;
        }
    }
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
    
    uniqueElement(arr, n);

    return 0;
}
