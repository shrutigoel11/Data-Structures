#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>&vec,int key){
    for(int i:vec){
        if(i==key){
            return true;
        }
    }
    return false;
}

int main()
{

int n;
cout<<"Enter size of vector: ";
cin>>n;
int key;
cout<<"Enter key element of vector: ";
cin>>key;
vector<int>vec(n);
cout<<"Enter elements of vector:";
for( int i=0;i<n;i++){
    cin>>vec[i];
}
if(linearSearch(vec,key)){
    cout<<"Element is found";
}
else{
    cout<<"Element is not found";
}
return 0;
}