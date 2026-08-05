#include <bits/stdc++.h>
using namespace std;
const int n =1e5 + 10;

bool vis[n];
vector<int> g[n];

int dfs(int vertex){
    //action taken after entering the vertex
    vis[vertex] = true;
    for(int child : g[vertex]){
        if(vis[child]) continue;
        //take action before entring child node
        dfs(child);
        //tske aaction after exiting child node
    }
    //take action before exiting vertex
}
int main(){
    
}