#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i <n ; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]= temp;
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
    leftRotateByOne(arr,n);
    cout<<"After rotating the array is : ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<< " ";
    }

return 0;
}