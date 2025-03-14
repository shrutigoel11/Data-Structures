#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void dfs2(int node, vector<int>adj[] ,vector<int> &ls, int vis[]){

    vis[node]= 1;
    ls.push_back(node);

    for(auto it: adj[node]){
        if(!vis[it]){
            dfs2(node, adj, ls, vis);
        }
    }
}

vector <int> dfs(int v, vector <int> adj[]){
    
    //create vis array
    int vis[v]={0};
    int start=0;

    vector<int>ls;
    dfs2(start, adj , ls, vis );
    return ls;

}

int main()
{



return 0;
}