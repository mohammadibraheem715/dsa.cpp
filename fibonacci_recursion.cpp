#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    int f = fib(n-1);
    int l = fib(n-2);
    return f + l;
}

int main(){
    int n;
    cin >> n;
    cout << fib(n);
}