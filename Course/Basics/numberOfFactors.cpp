#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n;
cout<<"Enter any number: ";
cin>>n;
cout<<"The factors are : ";
for(int i=1; i*i <=n ;i++){
    if( n % i == 0){
        cout << i <<" ";
        if( i != n/i){
        cout<< n/i<< " ";
    }
    }
    
}

return 0;
}