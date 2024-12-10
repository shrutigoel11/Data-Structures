#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapMaxMin(int arr[],int n){
    int mini=arr[0],maxi=arr[0];
    for(int i=0;i<n;i++){
        
            mini=min(arr[i],mini);
            maxi=max(arr[i],maxi);
        
    }
    cout<<"Minimum element is: "<<mini<<" and maximum element is: "<<maxi<<endl;
    swap(mini,maxi);
    cout<<"Minimum element after swap is: "<<mini<<" and maximum element after swap is: "<<maxi;

}

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
swapMaxMin(arr,n);

return 0;
}