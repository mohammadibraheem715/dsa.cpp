#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<vector<int>> lst;
int sum, n;

void compute(int i,vector<int> ds, int arr[], int tot){
    if(i == n){
        if(tot == sum){
        lst.push_back(ds);
    }
    return;
}
    ds.push_back(arr[i]);

    compute(i + 1, ds, arr, tot + arr[i]);

    ds.pop_back();

    compute(i + 1, ds, arr, tot);
}


int main(){
    cin >> n;
    int arr[n];
    
    cin >> sum;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    vector<int> ds;


    compute(0, ds, arr, 0);

    for(auto ar : lst){
        for(auto ele : ar){
            cout << ele << " ";
        }
        cout << endl;
    }

}