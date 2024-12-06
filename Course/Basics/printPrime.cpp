#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
        else{
            cout<<"No Prime Number between 1 to "<<n;
        }
    }
}

int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
findPrime(n);
return 0;
}