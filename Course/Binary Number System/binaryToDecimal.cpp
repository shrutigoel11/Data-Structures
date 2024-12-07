#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findDecimal(int n){
    int ans=0,pow=1,org=n;
    while(n>0){
        int digit=n%10;
        n=n/10;
        ans+=(pow*digit);
        pow*=2;
    }
    cout<<org<<" in Decimal is: "<<ans;
}

int main()
{

int n;
cout<<"Enter any binary number:";
cin>>n;
findDecimal(n);

return 0;
}