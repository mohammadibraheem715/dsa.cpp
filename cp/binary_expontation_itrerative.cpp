#include <bits/stdc++.h>
using namespace std;
int m = 1e9+7;

long long exp(long long a, long long b){
    int ans = 1;
    while(b > 0){
        if(b & 1){
            ans = ans  * a % m;
        }
            a = a * a;
            b = b >> 1;
        
    }

    return ans;
    
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << exp(a, b);
}