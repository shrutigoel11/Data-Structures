#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
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

    int key;
    cout<<"Enter key element  to be searched: ";
    cin>>key;
    int ans=linearSearch(arr,key,n);
    if(ans!=-1){
        cout<<"Element is found at index:"<<ans;
    }
    else{
         cout<<"Element is not found";
    }

return 0;
}