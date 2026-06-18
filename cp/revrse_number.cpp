#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a,s,t;
     cin>>t;
     while(t--){
         cin>>a;
         s=0;
          while(a>0){ 
           int ld = a%10;
           s=s*10+ld;
            a=a/10;
}
cout<<s<<endl;
}
}