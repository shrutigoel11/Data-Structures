#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPowOfTwo(int n){
     return (n > 0) && (n & (n - 1)) == 0;
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