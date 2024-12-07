#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPattern(int n){
        //top
        for(int i=0;i<n;i++){
            //traingle
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            //space
            for(int j=0;j<2*(n-i-1);j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
            }

            // //Bottom
            for(int i=0;i<n;i++){
                //star
                for(int j=n;j>i;j--){
                    cout<<"*";
                }
                //space
                if(i!=0){
                    for(int j=0;j<2*i;j++){
                        cout<<" ";
                    }
                }
                for(int j=n;j>i;j--){
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