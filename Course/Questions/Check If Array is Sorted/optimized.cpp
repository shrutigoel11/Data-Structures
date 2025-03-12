#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool checkIsArrayIsSorted(int arr[],int n){
    for( int i = 0; i < n ; i++){
        if(arr [i+1] > arr[i]){

        }
        else{
            return false;
        }
    }
    return true;
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
if(checkIsArrayIsSorted(arr,n))cout<<"Array is sorted";
else cout<<"Array is not sorted";


return 0;
}