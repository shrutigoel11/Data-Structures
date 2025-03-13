#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// given no. of vertices: n  and m lines of edges

vector<int> list(int n, int arr[])
{
    int m = sizeof(arr) / sizeof(arr[0]);
   
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // if directed skip it
    }
}

int main()
{

    return 0;
}