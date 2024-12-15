#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int i, int arr[4]) {
    if(i>= 4/2) return;
    swap (arr[i], arr[4-i-1]);
    reverse(i+1, arr);
    
}

int main() {
    int arr[] = {1, 2, 3, 4};
    reverse(0, arr);

    // Printing the array values, not the index
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";  // Print the array elements, not the index
    }

    return 0;
}
