#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {

       int n= digits.size();

       for(int i = n-1 ; i >= 0 ; i--){

        // if digits are less than 9 simply add 1 in the array and return the array
        if(digits[i] < 9){
            digits[i] += 1;
            return digits;
        }
        //else (digit == 9) make it 0 and forward carry;
        digits[i] = 0;
       }
       //after it means carry forwarded as i reaches at beginning of the digit vector --> add 1 -> 0, 0, 0
       digits.insert(digits.begin(), 1);
       return digits;
    }

int main()
{
int n;
cout<<"Enter size of vector: ";
cin>>n;

cout<<"Enter vector elements: ";
vector <int> digits(n);
for( int i = 0; i < n ; i++){
        cin >> digits[i];
}
vector <int> ans = plusOne(digits);
cout<<"[";
for(auto i :ans){
    cout<<i;
}
cout<<"]";
return 0;
}