#include<bits/stdc++.h>
using namespace std;

int main(){
   int a,b,c,count=0;
   cin>>a>>b>>count;
   int kth;
for(int i=2;0<count;i++){
    if(i%a==0||i%b==0){
        kth=i;
        count--;
    }
}
int lcm;
for(int i=1;i<=a*b;i++){
    if(i%a==0&&i%b==0){
    lcm=i;
    break;
    }
}
    int step;
    if(kth%a==0&&kth%b==0) 
    step=lcm;
    else if(kth%a==0)
    step=a;
    else 
    step=b;

    for(int i=kth;i>=0;i=i-step){
        cout<<i<<" ";
    }


}