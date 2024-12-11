#include <iostream>
using namespace std;

void duplicateElement(int arr[], int n) {
    bool printed[n]={false};
   for(int i=0;i<n;i++){
    if(printed[i]){
        continue;
    }
    bool isDuplicate=false;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            isDuplicate=true;
            printed[j]=true;
        }
    }
    if(isDuplicate){
        cout<<"Duplicate element is:"<<arr[i];
        printed[i]=true;
    }
   }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    duplicateElement(arr, n);

    return 0;
}
