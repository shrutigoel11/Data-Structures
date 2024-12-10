#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{

int n;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
cout<<"Orignal array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;
reverseArray(arr,n);
cout<<"Reversed array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}

return 0;
}