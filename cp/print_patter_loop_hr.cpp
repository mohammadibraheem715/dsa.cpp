#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int n=2*a-1;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
        int top=i;
        int left=j;
		int right=(n-1)-j;
		int down=(n-1)-i;
		cout<<a-(min(min(left,right), min(top,down)));

		}
		cout<<endl;
	}
	}