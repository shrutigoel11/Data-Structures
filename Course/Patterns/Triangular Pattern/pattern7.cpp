 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    //outer loop for row
    for(int i=0;i<n;i++){  
        //inner loop for deciding what to print
        for (int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        //to break the line after each iteration
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