#include <bits/stdc++.h>
using namespace std;

int n = 1e7 + 10;
vector<bool> seive(n,  1);
vector<int> lw(n,  0),hg(n,  0);


int main(){
    seive[0] = seive[1] = false;

    for(int i = 2; i < n; i++ ){
        if(seive[i] == true){
            lw[i] = hg[i] = i;
            for(int j = 2 * i; j < n; j += i){
                    seive[j] = false;
                    hg[j] = i;
                    if(lw[j] == 0){
                        lw[j] = i;
                    }
            }
        }
    }

    for( int i = 1; i < 100; i++){
        cout <<  lw[i]<< " " << hg[i] << endl;
    }
}