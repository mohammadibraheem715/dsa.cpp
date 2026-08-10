#include <bits/stdc++.h>
using namespace std;
const int n = 1e5+10;

int sub_tree[n]; 
int even_cnt[n];

vector<int> g[n];

void dfs(int vertex, int par = 0){
/*1*/  sub_tree[vertex] += vertex;
       if(vertex % 2 == 0) sub_tree[vertex]++;
    for(auto child : g[vertex]){
/*2*/
        if(child == par) continue;
        dfs(child, vertex);
/*3*/   sub_tree[vertex] += sub_tree[child];
/*3*/   even_cnt[vertex] += even_cnt[child];
    }
/*4*/
}

int main(){
    int n;
    cin>>n;

    for(int i = 0; i < n-1; i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);
    int q;
    cin >> q;
    while(q--){
        int v;
        cin >> v;
        cout << sub_tree[v] << " " << even_cnt << endl;
    }
}