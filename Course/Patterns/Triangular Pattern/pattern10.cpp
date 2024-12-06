 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    //outer loop for row
    
    // for(int i=0;i<n;i++){  
    //     int count=i+1;
    //     //inner loop for deciding what to print
    //     for (int j=0;j<=i;j++){
    //         cout<<count<<" ";
    //         count--;
    //     }
    //     //to break the line after each iteration
    //     cout<<endl;
    // }

    //Backward Loop

    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main()
{
int n;
cout<<"Enter the value of n:";
cin>>n;
printPattern(n);

return 0;
}