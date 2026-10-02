#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        long long bin=0;
        string s;
        cin>>s;
        for(int i=0;i<l;i++){
           int st= s[l-i-1]-'0';
            bin=bin+st*pow(2,i);
        }
        cout<<bin<<endl;
    }
}