#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <  int> twoSum(vector< int> nums, int target){
    map < int , int > mpp;
    for(int i= 0; i < nums.size( ) ;i++){
        int a = nums[i];
        int more= target-a;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more],i};
        }
        mpp[a]=i;
    }
    return {-1,-1};
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