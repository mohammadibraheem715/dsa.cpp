#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m];
//input array
for(int i=0;i<n;i++){
for(int j=0;j<m;j++)
{
cin>>a[i][j];
}}
int u=0,v=0;
//computation
int b = min(n,m);
for(int i=0;i<b;i++){
    u=0;
    v=0;
    for(int z=0;z<b;z++)
    { u=u+a[z][i];}
    for(int z=0;z<b;z++)
    { v=v+a[i][z];}
    
    if(u!=v)
    { 
        cout<<"false";
        exit(0);
    }
    

}

        cout<<"true";

}