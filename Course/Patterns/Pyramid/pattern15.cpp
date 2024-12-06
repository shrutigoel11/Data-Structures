#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
    
   for(int i=0;i<n;i++){
    //space
    for(int j=0;j<=n-i;j++){
        cout<<" ";
    }
    int num=1;
    for(int k=0;k<=i;k++){
        cout<<num;
        num++;
    }
    num=1;
    for(int k=i;k>0;k--){
        cout<<k;
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