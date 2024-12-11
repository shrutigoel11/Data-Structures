#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseVector(vector<int>&vec){
    int start=0,end=vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}

int main()
{

int n;
cout<<"Enter size of vector: ";
cin>>n;
vector<int>vec(n);
cout<<"Enter elements of vector:";
for( int i=0;i<n;i++){
    cin>>vec[i];
}
cout<<"Vector elements before reversing: ";
for(int i:vec){
    cout<<i<<" ";
}cout<<endl;
reverseVector(vec);
cout<<"Vector elements after reversing: ";
for(int i:vec){
    cout<<i<<" ";
}
return 0;
}