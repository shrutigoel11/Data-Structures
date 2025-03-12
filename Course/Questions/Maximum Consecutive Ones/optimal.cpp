#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0;         // Counter to track the current consecutive ones
    int maxi = 0;        // Variable to track the maximum consecutive ones

    // Loop through the elements of the array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            cnt++;  // If the current element is 1, increment the counter
            maxi = max(maxi, cnt);  // Update the maximum if the current count is higher
        }
        else {
            cnt = 0;  // Reset the counter if the current element is 0
        }
    }

    return maxi;  // Return the maximum consecutive ones
}

int main() {
    int n;
    cout << "Enter the number of elements in the binary array: ";
    cin >> n;

    vector<int> nums(n);  // Vector to store the binary array
    cout << "Enter the binary array (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];  // Input binary elements (0s or 1s)
    }

    int ans = findMaxConsecutiveOnes(nums);  // Find the maximum consecutive 1s
    cout << "Maximum consecutive 1's: " << ans << endl;

    return 0;
}
