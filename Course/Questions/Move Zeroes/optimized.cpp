#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n){
    int j=-1;
    for(int i=0 ; i< n ;i++){
        if(arr[i] == 0) {
            j=i;
            break;
        }
    }
    // if( j== -1) return arr;
    for(int i=j+1; i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
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
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
       cout<< arr[i]<<" ";
    }cout<<endl;
    moveZeroes(arr,n);
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
       cout<< arr[i]<<" ";
    }

return 0;
}