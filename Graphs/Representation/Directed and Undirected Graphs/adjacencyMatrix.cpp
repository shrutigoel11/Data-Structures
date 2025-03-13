#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// given no. of vertices: n  and m lines of edges

void matrix(int n, int arr[])
{

    int m = sizeof(arr) / sizeof(arr[0]);
    int adj[n + 1][n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // if directed graph skip it
    }
}

int main()
{

    return 0;
}