#include <bits/stdc++.h>
using namespace std;


void rev(int i, string m[], int n){
    if(i >= n/2){
        return;
    }
    swap(m[i], m[n-i-1]);
    rev(i+1, m, n);
}

int main(){
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rev(0, arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
}