#include<bits/stdc++.h>
using namespace std;

int main()
//input string
{
string s;
cin>>s;


//pre compution
int hash[26]={0};
for(int i=0;i<s.size();i++)
{
    hash[s[i]-'a']+=1;
}



//fetch
int q;
cin>>q;
while(q--)
{
  char ch;
  cin>>ch;
  cout<<hash[ch-'a']<<endl;

}





}
