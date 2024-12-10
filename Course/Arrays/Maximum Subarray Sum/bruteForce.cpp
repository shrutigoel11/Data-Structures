#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int maxSubarraySum(int arr[],int n){
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int j=st;j<=end;j++){
//                 cout<<arr[st];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

int main()
{

int  n;
cout<<"Enter size of an array: ";
cin>>n;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int j=st;j<=end;j++){
                cout<<arr[j];
            }
            cout<<" ";
        }
        cout<<endl;
    }
// maxSubarraySum(arr,n);

return 0;
}