#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Head Recusrion: Recursion call first and then task
//Tail Recusion: Task and then recursion call

void f1(int i , int n){
    if(i > n)return;
    f1(i+1, n);
    cout<< i<< " ";
}
void f2(int i , int n){
    if(i > n)return;
    cout<< i<< " ";
    f2(i+1, n);
    
}
void f3(int i , int n){
    if(i < 1)return;
    cout<< i<< " ";
    f3(i-1, n);
    
}
void f4(int i , int n){
    if(i < 1)return;
     f4(i-1, n);
    cout<< i<< " ";
    
}

int main()
{

int n;;
cout << "Enter the value of n: ";
cin >> n;

cout << "Head Recursion: ";
f1(1,n);
cout<<endl;

cout << "Tail Recursion: ";
f2(1,n);
cout<<endl;

cout << "Backtrack : "<<endl;
cout << "Tail Recursion: ";
f3(n,n);
cout<<endl;

cout << "Head Recursion: ";
f4(n,n);
cout<<endl;
return 0;
}