#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n){
    int largest=arr[0];
    int secondLargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i] > largest) {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i] <  largest && arr[i]> secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}

int main()
{
int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
int ans=secondLargest(arr,n);
cout<<"Second largest element is : "<<ans;


return 0;
}