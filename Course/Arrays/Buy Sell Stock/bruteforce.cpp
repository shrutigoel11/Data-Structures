#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int maxProfit = 0 , bestBuy = prices[0];
    int n =prices.size();
        for(int i= 1; i < n ;i ++){
            if( prices [i] > bestBuy){
                maxProfit = max( maxProfit , prices[i] - bestBuy);
            }
            bestBuy= min (bestBuy , prices[ i]);
        }
        return maxProfit;
    }

int main()
{
int n;
cout<<"Enter size of vector: ";
cin>>n;
vector <int> vec(n);
cout<<"Enter vector elements: ";
for(int i=0 ; i < n; i++)
{
    cin>>vec[i];
}
int maxProfitAns= maxProfit(vec);
cout<<"Maximum Profit is : "<<maxProfitAns;
return 0;
}