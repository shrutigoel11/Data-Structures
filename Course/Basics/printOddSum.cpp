#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findOddSum(int n){
    int oddSum=0;
    for(int i=1;i<=n;i++){
        if(i%2 !=0){
            oddSum+=i;
        }
    }
    return oddSum;
}

int main()
{

int n;
cout<<"Enter any number:";
cin>>n;
int sum=findOddSum(n);
cout<<"Sum of all odd numbers from 1 to "<<n<<" is : "<<sum; 
return 0;
}