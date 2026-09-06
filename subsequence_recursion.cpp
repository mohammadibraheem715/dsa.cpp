#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int arr[N];
vector<vector<int>> v;

int seq(int i, vector<int> &ds, int am[], int n){
        if(i ==  n){
            v.push_back(ds);
            return 1;
        }

        ds.push_back(am[i]);
        seq(i + 1, ds, am, n);

        ds.pop_back();
        seq(i + 1, ds, am, n);
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ds;
    seq(0, ds, arr, n);

    for(auto sub : v){
        for(auto ele : sub){
            cout << ele << " ";
        }
        cout << endl;
    }
}