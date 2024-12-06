#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    char ch='A';
   for(int i=0;i<n;i++){
    //space
    for(int j=0;j<=i;j++){
        cout<<" ";
    }
    for(int k=0;k<n-i;k++){
        cout<<ch;
    }
    ch++;
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