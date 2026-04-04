#include<bits/stdc++.h>
using namespace std;

void cp(int n)
{ //input array
   int a;
   cin>>a;
   int b[a];
   for(int i=0;i<a;i++)
  { cin>>b[i];}

    //pre computation
    int hash[13]={0};//max size
     for(int i=0;i<a;i++)
     {
        hash[b[i]] += 1;
     }

    //fetch
   int q;
   cin>>q;
   while(q--)
   { 
    int num;
    cin>>num;
    cout<<hash[num]<<endl;
}
   


}



int main()
    {  int t;
        cin>>t;
        while(t--)
        {int n;
            cin>>n;
            cp(n);
            
        }
}














    