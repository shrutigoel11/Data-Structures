#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// given no. of vertices: n  and m lines of edges

vector<int> list(int n, int arr[])
{
    int m = sizeof(arr) / sizeof(arr[0]);
   
    vector<pair<int,int>> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        int wt1; //for v
        int wt2; //for u
        cin >> u >> v>>wt1 >>wt2;
        
        adj[u].push_back(make_pair(v,wt1));
        adj[v].push_back(make_pair(u,wt2)); 
    }
}

int main()
{

    return 0;
}