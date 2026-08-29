#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int inf = 1e9 + 10;

vector<pair<int, int> > g[N];

void disjktra(int source){
    vector<int> vis(N, 0);
    vector<int> dis(N, inf);

    set<pair<int, int> > set;

    set.insert({0, source});
    dis[source] = 0;

    while(set.size() > 0){
        auto node = *set.begin();
        int v = node.second;
        int dist_v = node.first;
        set.erase(set.begin());
        if(vis[v] == 1) continue;
        vis[v] = 1;

        for(auto child : g[v]){
            int child_v = child.first;
            int wt = child.second;
            if(dis[dist_v] + wt < dis[child_v]){
                dis[child_v] = dis[dist_v] + wt;
                set.insert(dis[child_v], child_v})
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for( int i = 0; i < m; i++){
        int x, y, wt;
        cin >> x >> y >> wt;
        g[x].push_back({y, wt});
    }
}