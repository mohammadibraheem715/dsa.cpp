#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    if(a%2) {cout<<0;return 0;}
    a/=2;
    if(a%2) 
    cout<<a/2;
    else 
    cout<<((a/2)-1);
}