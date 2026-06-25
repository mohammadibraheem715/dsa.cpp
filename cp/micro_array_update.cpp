#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int m;
    cin>>m;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //calculation
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=a[i][m-1-j]||a[i][j]!=a[m-1-i][j]){
                cout<<"NO";
                exit;
            }
        }
    }
    cout<<"YES";

    }
}