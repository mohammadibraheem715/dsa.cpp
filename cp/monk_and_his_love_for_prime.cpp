#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long sum =0;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>96){
        s[i]=s[i]-32;
        sum = sum + s[i];
        }
        else if(s[i]<91){
            s[i]=s[i]+32;
        sum = sum - s[i];
        }
    }
        if(sum<0){
            sum = sum * (-1);
        }
    
        for(int i=2;i<sum;i++){
            if(sum%i==0){
                count=1;
                break;
            }
        }

        if(count=0){
            cout<<1;
        }
        else
            cout<<0;
        
    
}