#include<bits/stdc++.h>
using namespace std;

int main()
{   //input
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {cin>>arr[i];}

    //pre computation
    map<int,int>mpp;
    for(int i=0;i<n;i++)
   {  
    mpp[arr[i]]++;
  }




  int q;
  cin>>q;
  while(q--)
  {
    int num;
    cin>>num;
    //fetch
    cout<<mpp[num]<<endl;
  }
}