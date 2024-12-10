#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int  maxSum(int arr[],int n){
    int currSum=0,maxSum=INT16_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
 
    return maxSum;
}


int main()
{

int  n;
cout<<"Enter size of an array: ";
cin>>n;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
} 
int  max=maxSum(arr,n);
cout<<"Maximumsubarray sum is: "<<max;

return 0;
}