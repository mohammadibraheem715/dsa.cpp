#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long a;

        cin>>n>>a;

        vector<long long> c(n);
        vector<long long> d(n);
        
        for(int i = 0; i < n; i++){
            cin >>  c[i] >> d[i];
        }

        long long profit=0;

        for(int i=0;i<n;i++){
            long long earn = 0;
            long long max_din = c[i];
            long long min_din = d[i];

            for(int j = i; j < n; j++){
                long long d_val = d[j];

                if(max_din<d[j]) max_din = d[j];
                if(min_din<d[j]) min_din = d[j];
                earn += c[j];

                long long count =  j-i+1;
                long long pen = ( max_din - min_din ) * ( max_din - min_din );
                long long sum = ( a * count ) - earn - pen;
                
            }
        }

        cout << endl;

    }
}
