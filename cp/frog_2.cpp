#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int h[N];
int dp[N];
int k;

int frog(int i){
    if(i == 0) return 0;
    int cost = INT_MAX;

    for(int j = 0; j < k; j++){
        if(i - j >= 0)
        cost = min(cost, frog(i - j) + abs(h[i] - h[i - j]));
    }
    
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    cout << frog(n - 1);
}