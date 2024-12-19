#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intArray( int arr1 [], int n1, int arr2[], int n2){
    int i = 0, j=0;
    vector<int> ans;
    while( i< n1 && j < n2){
        if( arr1[i] < arr2[j]) i++;
        else if( arr2[j] < arr1[i]) j++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

  

int main() {
    int n1, n2;

    cout << "Enter size of array 1: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter array elements: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter array elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Sorting arrays
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

   
    vector<int> intArr = intArray(arr1, n1, arr2, n2);

   
    cout << "Intersesction of arrays: ";
    for (auto i : intArr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}