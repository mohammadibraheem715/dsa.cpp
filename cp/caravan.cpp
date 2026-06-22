#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,n,max=1;
    cin>>t;
    while(t--){
        max=1;
        cin>>n;
      int a[n]; 
      //input no of speed 
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      //calculation
      if(n==1) {cout<<1<<endl;
        }
        else if(n!=1)
      { for(int i=0;i<n-1;i++){
        
        if(a[i]<a[i+1]){
            a[i+1]=a[i];}
        else if(i==(n-2)&&(a[i]>=a[i+1])){
            max++;
        }
        else if(a[i]>=a[i+1])
        {max++;}
      
        }
       if(n!=1) cout<<max<<endl;
     }
        
}}