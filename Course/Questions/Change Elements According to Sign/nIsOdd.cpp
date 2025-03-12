
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void alterElements(int arr[], int n) {
    int pos[n], neg[n];
    int posIndex=0, negIndex=0;
    for(int i=0; i< n ; i++){
        if(arr[i] > 0){
            pos[posIndex++]=arr[i];
        }
        else{
            neg[negIndex++]= arr[i];
        }
    }
    int i=0,j=0,k=0;
    while( i< posIndex && j< negIndex){
        //Move positive first
        arr[k++]=pos[i++];
        //Move negative now
        arr[k++]= neg[j++];
    }
    //If any array contains elements push
    while(i< posIndex){
        arr[k++]=pos[i++];
    }
    while(j < negIndex){
        arr[k++]=neg[j++];
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

    cout << "The array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    alterElements(arr, n);

    cout << "The array elements after alterations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
