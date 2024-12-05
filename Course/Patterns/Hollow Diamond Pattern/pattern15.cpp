#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){

    //TOP

    //space * space *
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        // for(int j=0;j<1;j++){
        //     cout<<"*";
        // }
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        }
            
        
        cout<<endl;
    }
    
    //BOTTOM
     
     for(int i=0;i<n-1;i++){
        //space
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=n-2){
            //spaces
            for(int j=0;j<2*(n-i)-5;j++){
            cout<<" ";
             }
            cout<<"*";
        }
        cout<<endl;
     }
        
    }


int main()
{
int n;
cout<<"Enter the value of n:";
cin>>n;
printPattern(n);

return 0;
}