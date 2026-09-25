#include <bits/stdc++.h>
using namespace std;
vector<int> hsh(26);

int pal(string n){
int cnt = 0;

    // hashing the values
    for(int i = 0; i < n.length(); i++){
        hsh[(n.at(i)) - ('a')]++;
    }

    //calculating no of pallindrome

    for(int i = 0; i < 26; i ++){
        if((hsh[i] / 2) >= 1){
            cnt = cnt + (hsh[i] / 2);
        }
    }

    for(int i = 0; i < 26; i ++){
        hsh[i] = 0;
    }

    //returnig ans
    return cnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        int ans = pal(n);
        cout << ans << endl;
    }
}