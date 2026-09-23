#include<bits/stdc++.h>
using namespace std;
int solve (int N, vector<int> A) {
    long long sum = 0;
    int m = 0;
   for(auto i : A){
    sum = sum + i;
    m = max(m, i) ;
   }

   if(N == 1){
    if(A[0] == 0)
        return 0;
    else
        return -1;
   }

    if((sum % (N - 1)) != 0)
        return -1;

    long long k;
    k = sum / (N-1);

    if(m > k)
        return -1;

    return k;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(N, A);
        cout << out_;
        cout << "\n";
    }
}