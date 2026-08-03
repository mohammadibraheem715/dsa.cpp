#include <bits/stdc++.h>
using namespace std;

int n = 1e7 + 10;
vector<bool> seive(n,  1);


int main(){
    seive[0] = seive[1] = false;

    for(int i = 2; i < n; i++ ){
        if(seive[i] == true){
            for(int j = 2 * i; j < n; j += i){
                    seive[j] = false;
            }
        }
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        if(seive[num]){
            cout << "Prime" << endl;
        }
        else
            cout << "Not Prime" << endl;
    }
}