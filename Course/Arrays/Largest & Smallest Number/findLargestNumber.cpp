#include <iostream>
#include <algorithm>
using namespace std;

int largestNumber(int arr[],int n){
    int largest=INT16_MIN;
    for(int i=0;i<n;i++){
        largest=max(arr[i],largest);
    }
    return largest;
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
    int largest=largestNumber(arr,n);
    cout<<"Largest number in the array is:"<<largest;

return 0;
}
