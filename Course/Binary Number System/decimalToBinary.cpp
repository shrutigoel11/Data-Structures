#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findBinary(int n){
    int org=n;
    int ans=0,pow=1;
    while(n>0){
        int digit=n%2;
        n=n/2;
        ans+=(digit*pow);
        pow*=10;
    }
   cout<<org<<" in Binary is: "<<ans;
}

int main()
{

int n;
cout<<"Enter any decimal number:";
cin>>n;
findBinary(n);
return 0;
}