#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPowOfTwo(int n){
    if(n<=0)return false;
    while(n%2==0){
        cout<<n<<" ";
        n=n/2;
    }
    return n==1;
}

int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
if(isPowOfTwo(n)){
    cout<<n<<" is power of two";
}
else{
    cout<<n<<" is not a power of two";
}

return 0;
}