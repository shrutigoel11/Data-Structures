#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) { //O(n^2)
    int n = nums.size();
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    // if array is 1,2,3,4 moore's voting return 4 
   int count=0;
    for(int val:nums){
        if(ans==val){
            count++;
        }
    }
    if(count>n/2)return ans;
    else return -1;
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
