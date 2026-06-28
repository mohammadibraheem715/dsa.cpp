#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k;
        long long pro=1;
        cin>>s;
        while(s--)
        { 
            cin>>k;
            pro=pro*k;}
        int sig=pro%10;
        if(sig==2||sig==3||sig==5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }

}