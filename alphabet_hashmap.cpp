#include<bits/stdc++.h>
using namespace std;

int main()
//input string
{
string s;
cin>>s;


//pre compution
int hash[256]={0};
for(int i=0;i<s.size();i++)
{
    hash[s[i]]+=1;
}



//fetch
int q;
cin>>q;
while(q--)
{
  char ch;
  cin>>ch;
  cout<<hash[ch]<<endl;

}





}
