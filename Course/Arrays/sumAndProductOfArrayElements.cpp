#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSumAndProduct(int n, int arr[]){
    int sum=0,product=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum of elements is: "<<sum<<endl;
    cout<<"Product of elements is: "<<product<<endl;
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
printSumAndProduct(n,arr);

return 0;
}