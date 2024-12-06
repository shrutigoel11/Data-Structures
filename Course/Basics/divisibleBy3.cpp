#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findFactors(int n){
    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout<<i<<" ";
        }
        // else{
        //     cout<<"No factor of 3 between 1 to "<<n;
        // }
    }
}

int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
findFactors(n);
return 0;
}