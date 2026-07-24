#include <bits/stdc++.h>
using namespace std;

int power(int c, int d){

    if(d==0)
        return 1;

    long result = power(c, d/2);

    if(d&1){
        return c * result * result;
    }
    else{
        return result * result;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}