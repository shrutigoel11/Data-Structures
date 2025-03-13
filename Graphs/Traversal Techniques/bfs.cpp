#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> bfs(int n,vector<int>adj[]){
    //create empty vis array with all ele as 0
    int vis[n+1]={0};

    //create queue and push starting node let 0-based
    queue<int> q;
    q.push(0);

    //vector bfs
    vector<int>bfs(n+1);

    //take ele from q and add it to bfs and pop it
    int node;
    while(!q.empty()){
        node= q.front();
        bfs.push_back(node);
        q.pop();
    }

    // add neighours to queue and update vis arr
    for( auto it: adj[node]){
        q.push(node);
        vis[node]=1;
    }

}

int main()
{



return 0;
}