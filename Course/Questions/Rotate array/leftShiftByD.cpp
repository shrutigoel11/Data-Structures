#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d , arr+n);
    reverse(arr, arr+n);
}

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int d;
    cout << "Enter d's value of array: ";
    cin >> d;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Before rotating the array is : ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i] << " ";
    }cout<<endl;
    leftRotateByOne(arr,n,d);
    cout<<"After rotating the array is : ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<< " ";
    }

return 0;
}