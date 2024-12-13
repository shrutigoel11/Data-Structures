#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
        //base cases
        if ( n == 0 && x==1) return 1;
        if( x == 0) return 0;
        if( x== -1 ) return ( n % 2 == 0)? 1 : -1;

        long binary = n;
        double ans=1;
        double mul = x;

        bool isNeg= false;

        if(n < 0){
            isNeg = true;
            binary = -binary ; 
        }

        while( binary > 0){
            if( binary % 2 == 1){
                ans *= mul ;
            }
            mul *= mul ;
            binary >>=1; 
        }

        if(isNeg){
            return 1/ans;
        }
        return ans;
    }

int main()
{

double x ;
int n;
cout<<"Enter any number: ";
cin >> x;

cout<<"Enter any power: ";
cin >> n;
double ans= myPow(x, n);
cout<<"Power of x is: "<< ans;

return 0;
}