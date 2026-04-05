#include<bits/stdc++.h>
using namespace std;

int main()
{   //input
 string ch;
 cin>>ch;

    //pre computation
    int maxfrequency=0;
    map<char,int>mpp;
    for(int i=0;i<ch.size();i++)
   { mpp[ch[i]]++;}
     char a;
      
      for(int i=0;i<ch.size();i++)
      {if(mpp[ch[i]]>maxfrequency)
       { maxfrequency=mpp[ch[i]];
        a=ch[i];}

      }
      

    cout<<"highest frequency is "<<maxfrequency<<" of "<<a;

  
  
}