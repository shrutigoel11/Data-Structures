#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void checkEvenOdd(int n){
    if(n%2==0){
        cout<<"It is an even number";
    }
    else{
        cout<<"It is an odd number";
    }
}


int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
checkEvenOdd(n);

return 0;
}