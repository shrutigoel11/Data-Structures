#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
cout<<"Enter size of array:";
cin>>n;
int arr[n];

cout<<"Enter array elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int largest=arr[0];
int largestIndex=-1;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
        largestIndex=i;
    }
}
cout<<"Largest element in the array is: "<<largest<<" at index: "<<largestIndex;

return 0;
}