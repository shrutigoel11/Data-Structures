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
int smallest=arr[0];
int smallestIndex=-1;
for(int i=0;i<n;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
        smallestIndex=i;
    }
}
cout<<"Smallest element in the array is: "<<smallest<<" at index: "<<smallestIndex;

return 0;
}