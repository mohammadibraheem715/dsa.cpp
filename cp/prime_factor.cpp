#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> prfac;
    for( int i = 2; i * i <= n; i++){
        while(n % i == 0){f
            prfac.push_back(i);
            n /= i;
        }
    }
    if(n > 1) prfac.push_back(n);

    for(int pr:prfac){
        cout << pr <<" ";
    }
}