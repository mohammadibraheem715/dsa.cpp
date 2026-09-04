#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int wt[105], val[105];
long long dp[105][100005];

long long func(int index, int wtl){
    if(wtl == 0) return 0;
    if(index < 0) return 0;
    if(dp[index][wtl] != -1) return dp[index][wtl];
    long long ans = func(index - 1, wtl);
    if(wtl - wt[index] >= 0)
    ans = max(ans, func(index - 1, wtl - wt[index]) + val[index]);
    return ans;
}
int main(){
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for(int i = 0; i < n; i++){
        cin >> wt[i] >> val[i];
    }
    cout << func(n-1, w);
}