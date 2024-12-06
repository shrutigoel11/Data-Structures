#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    char ch='A';
    //outer loop for row
    for(int i=1;i<=n;i++){
        
        //inner loop for deciding what to print
        for (int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
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