#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void revInt(int n){
    int revNum=0,org=n;
    while(n>0){
        int digit=n%10;
        revNum=(revNum*10)+digit;
        n=n/10;
    }
    cout<<"Reversed integer "<<org<<" is:"<<revNum;
}

int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
revInt(n);
return 0;
}
