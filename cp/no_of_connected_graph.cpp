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
 int n, e;
 cin >> n >> e;   

 for(int i = 0; i < e; i++){
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
 }

 int cnt = 0;
 for(int i = 1; i <= n; i++){
    if(vis[i]) continue;
    dfs(i);
    cnt++;
 }
 cout << cnt << endl;
}