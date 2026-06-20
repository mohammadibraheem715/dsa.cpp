#include <bits/stdc++.h>
using namespace std;

int main() {
   string s,t,u="",v="";
   int a=-1;
   cin>>s>>t;
   int ls=s.size();
   int lt=t.size();

   for( int i=0;i<max(ls,lt);i++){
    
    if(i<ls)
    {u=s.substr(i,2);}
    if(lt>i)
    {v=t.substr((lt-i-2),2);}
     
    if(ls==1||lt==1)
    {cout<<-1;
        a++;
    break;}
   
   if(u==v)
   { 
    a++;
    if(s[i-1]==t[lt-i-1]) cout<<s.substr(0,i-1)<<t.substr(lt-i-1,i+1);
    else cout<<s.substr(0,i)<<u<<t.substr(lt-i,i);
     break;}
   }

   if(a==-1)
   { cout<<-1;
   }

}