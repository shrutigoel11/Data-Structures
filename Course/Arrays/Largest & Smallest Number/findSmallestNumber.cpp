#include <iostream>
#include <algorithm>
using namespace std;

int smallestNumber(int arr[],int n){
    int smallest=INT16_MAX;
    for(int i=0;i<n;i++){
        smallest=min(arr[i],smallest);
    }
    
    return smallest;
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
    int smallest=smallestNumber(arr,n);
    cout<<"Smallest number in the array is:"<<smallest;

return 0;
}
