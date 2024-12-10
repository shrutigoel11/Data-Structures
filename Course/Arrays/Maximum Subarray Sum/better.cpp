#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int  maxSum(int arr[],int n){
    int maxSum=INT16_MIN;
 for(int st=0;st<n;st++){
    int curSum=0;
        for(int end=st;end<n;end++){
            
           curSum+=arr[end];
           maxSum=max(curSum,maxSum);
        }
        cout<<endl;
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