#include <bits/stdc++.h>
using namespace std;

void rec(int i){
    if(i < 1)
    return;
    rec(i-1);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    rec(n);
}