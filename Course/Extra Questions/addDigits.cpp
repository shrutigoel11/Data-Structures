//given any number, return the sum of digits until a single digit is left

// logic any number's digit sum % 9 === n 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int addDigits( int n){
    if( n == 0) return 0;
     return (n % 9 == 0)? 9 : n % 9;
}

int main()
{

int n;
cout<<"Enter any number: ";
cin>>n;
int ans =addDigits(n);

cout<<"Answer is : "<<ans;
return 0;
}