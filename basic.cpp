#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ar[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
             if(j==0||j==i){
                ar[i][j]=1;
             }
             else
             ar[i][j]=ar[i-1][j-1]+ar[i-1][j];          
              }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}