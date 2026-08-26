#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 10;

int parent[N];
int size[N];

void make(int v){
    parent[v] = v;
    size[v] = 1;
}

int  find(int v){
    if(parent[v] == v) return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);

    if(a != b){
        if(size[a] < size[b]){
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> cities(n+1);
    for(int i = 0; i <= n; i++){
        cin >> cities[i].first >> cities[i].second;
    }

    vector<int> c(n+1), k(n+1);
    for(int i = 0; i <= n; i++){
        cin >> c[i];
    }

    for(int i = 0; i <= n; i++){
        cin >> k[i];
    }

    vector<pair<long long, pair<int, int>>> edges;
    
    for(int i = 1; i <= n; i++){
        edges.push_back({c[i], {0, i}});
    }

    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            int dist = abs(cities[i].first - cities[j].first) + abs(cities[i].second - cities[j].second);
            long long price = dist * 1ll * (k[i] + k[j]);
            edges.push_back({price, {i, j}});
        }
    }

    sort(edges.begin(), edges.end());

    for(int i = 0; i <= n; i++) make(i);

    long long cost = 0;
    vector<int> power_station;
    vector<pair<int, int> > conections;
    for(auto edge : edges){
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(find(u) == find(v)) continue;
        Union(u, v);
        cost += wt;
        if(u == 0 || v == 0){
            power_station.push_back(max(u, v));
        }
        else{
            connections.push_back({u, v});
        }
    }
    cout << cost << endl;
    cout << power_station.size() << endl;
    for(int station : power_station){
        cout << station << " ";
    }
    cout << endl;
}