#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[], int n){
    int idx=-1;
    //find the index 
    for(int i= n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(arr, arr+n);
    }
    for(int i =n-1;i>=0;i++){
        if(arr[i]>arr[idx]){
            swap(arr[i], arr[idx]);
            break;
        }
    }
    reverse(arr+idx+1, arr+n);
}


int main()
{

int n;
cout<<"Enter the size of array: ";
cin>>n;

int arr[n];
cout<<"Enter array elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
nextPermutation(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
}

return 0;
}