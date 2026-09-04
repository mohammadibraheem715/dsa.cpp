#include <bits/stdc++.h>
using namespace std;
int n;

int rev(int m){
    if(m >= (n / 2)) return;
    swap(m, n-m);
    rev(m-1);
}

int main(){
    int n;
    cin >> n;
    rev(n);
}