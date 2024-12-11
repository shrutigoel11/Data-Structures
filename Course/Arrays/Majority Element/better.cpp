#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) { //O(nlogn)
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int freq=1, ans=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
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
