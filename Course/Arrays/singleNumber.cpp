#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int singleNumber(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}

int main()
{
    int n;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int singleNum=singleNumber(arr,n);
cout<<"The unique number in the array is: "<<singleNum;
return 0;
}