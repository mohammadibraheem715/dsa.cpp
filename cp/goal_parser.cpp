#include<bits/stdc++.h>
using namespace std;
    int main() {
        string s,r="";
        cin>>s;
        int l = s.size();
        for(int i=0;i<l;i++)
            {
            if(s[i]=='('&&s[i+1]==')')
            { r.push_back('o');
            l--; }
            else if(s[i]=='('&&s[i+1]=='a')
           { r.push_back('a');
        r.push_back('l');}
        else if(s[i]=='G')
           { r.push_back('G');} }
           cout<<r;
            
    }