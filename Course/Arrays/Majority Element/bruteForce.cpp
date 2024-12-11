#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) { //O(n^2)
    int n = nums.size();
    
    // Iterate through each element in the array
    for (int val : nums) {
        int freq = 0;
        
        // Count how many times `val` appears in the array
        for (int el : nums) {
            if (el == val) {
                freq++;
            }
        }

        // If the frequency of the element is greater than n/2, return the element
        if (freq > n / 2) {
            return val;
        }
    }

    // If no majority element is found, return -1
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    
    // Input the elements of the array
    cout << "Enter vector elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Find and print the majority element
    int maj = majorityElement(nums);
    if (maj != -1) {
        cout << "Majority element is: " << maj << endl;
    } else {
        cout << "No majority element found!" << endl;
    }

    return 0;
}
