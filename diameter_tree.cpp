#include <bits/stdc++.h>
using namespace std;
const  int n = 1e5 + 10;
vector<int> g[n];
int depth[n];

void dfs(int v, int par = -1){
    for(int child : g[v]){
        if(child == par) continue;
        depth[child] = depth[par] + 1;
        dfs(child, v);

    }
}

int main(){
    int t;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);

    int max_depth = -1;
    int max_d_node;
    for(int i = 1; i<=n; i++){
        if(max_depth < depth[i]){
            max_depth = depth[i];
            max_d_node = i;
        }
        depth[i] = 0;
    }
    dfs(max_d_node);
    max_depth = -1;
    or(int i = 1; i<=n; i++){
        if(max_depth < depth[i]){
            max_depth = depth[i];
        }
    }
}