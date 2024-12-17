#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[] ,int n){
    int i=0;
    for(int j=0 ; j< n ;j++){
        if( arr[j] != arr[i] ){
            arr[i+1]= arr[j];
            i++;
        }
    }
    return i+1;
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
    int ans=removeDuplicates(arr,n);
    cout<<"Number of elements are: "<<ans;

return 0;
}