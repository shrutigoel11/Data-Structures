#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i){
    if(i> s.length()/2) return true;
    if(s[i] != s[s.length()-i-1]) return false;
    return checkPalindrome( s, i+1);
}

int main()
{

string s;
cout<<"Enter a string: ";
cin>>s;
if(checkPalindrome(s,0))cout<< "Given string is palindrome";
else cout<<"String is not a palindrome";
return 0;
}