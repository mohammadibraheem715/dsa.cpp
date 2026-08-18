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
        int dist = node.first;

        for(auto child : g[v]){
            int child_v = child.first;
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