#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    for(int i=2 ; i*i<=n;i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}

int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
if(checkPrime(n)){
    cout<<"Prime Number";
}
else{
    cout<<"Non-Prime";
}


return 0;
}