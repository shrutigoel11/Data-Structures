#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rightRotateByOne(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-2;i >=0  ; i--){
        arr[i+1] = arr[i];
    }
    arr[0]= temp;
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
    cout<<"Before rotating the array is : ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i] << " ";
    }cout<<endl;
    rightRotateByOne(arr,n);
    cout<<"After rotating the array is : ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<< " ";
    }

return 0;
}