#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int a=0,b=1,nextNum;
    cout<<a<<","<<b;
    for(int i=0;i<n;i++){
         nextNum=b+a;
         a=b;
         b=nextNum; 
         cout<<","<<nextNum;
    }  
}


int main()
{

int n;
cout<<"Enter any number: ";
cin>>n;
fibonacci(n);

return 0;
}