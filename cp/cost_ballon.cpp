#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,cg,cp,n,g=0,p=0;
	cin>>t;
	while(t--){
        g=0;
        p=0;
		cin>>cg>>cp>>n;
		int a[n-1][2];
		for(int i=0;i<n;i++){
			for(int j=0;j<2;j++){
			cin>>a[i][j];}}

		for(int i=0;i<n;i++){
			for(int j=0;j<2;j++){
			if(1==a[i][j]&&j==0)
            {g++;}
             else if(1==a[i][j]&&j==1)
             { p++;}}}
             
			
          if(g>=p) cout<<g*min(cg,cp)+p*max(cg,cp)<<endl;
          else if(p>g) cout<<p*min(cg,cp)+g*max(cg,cp)<<endl;
		}
	}
