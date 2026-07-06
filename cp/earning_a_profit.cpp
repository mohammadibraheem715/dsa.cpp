#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long a;
        cin>>n>>a;
        vector<long long>c(n);
        vector<long long>d(n);

        for(int i=0; i<n; i++){
            cin >> c[i] >> d[i];
        }

        long long profit = 0;

        for(int i=0; i<n; i++){
            long long min_d = d[i];
            long long max_d = d[i];
            long long cost_sum = 0;

            for(int j=i; j<n; j++){
               long long d_val = d[j];
            
                if (d_val < min_d) min_d = d_val;
                if (d_val > max_d) max_d = d_val;
                cost_sum+=c[j];

                long long count = j - i + 1;
                long long penalty = (max_d - min_d) * (max_d - min_d);
                long long net = (a * count) - cost_sum - penalty;
                if(net>profit) profit = net;
            }
    

        }

        cout<<profit<<endl;

    }
}