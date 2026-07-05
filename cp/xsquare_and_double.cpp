#include<bits/stdc++.h>
using namespace std;

   int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0;
        string s;
        cin>>s;
        int ar[26]={0};
        for(int i=0;i<s.size();i++){
            ar[s[i]-'a']++;
        }
        for(int j=0;j<26;j++){
            if(ar[j]>1){
                n=1;
                break;
            }
        }

        if(n==1)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;


   }
}