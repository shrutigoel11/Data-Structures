#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        int i=0, j= nums.size()-1;
        while(i<=j){
            int sum= nums[i]+nums[j];
            if(sum == target) return {i,j};
            else if (sum > target) j--;
            else i++;
        }
        return {i,j};
    }

int main()
{

int n, target;
cout<<"Enter size of vector: ";
cin>> n;
vector <int>  nums(n);
cout<<" Enter vector elements : ";
for( int i = 0 ; i < n ; i++){
    cin >> nums[i];
}
cout<<"Enter target value: ";
cin>> target;
vector< int> mpp=twoSum(nums, target);
 cout<<"Elements at index: ";
for(auto it:mpp){
   cout<< it<<" ";
}

return 0;
}