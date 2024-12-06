#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findFactorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<f;
}

int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
findFactorial(n);
return 0;
}