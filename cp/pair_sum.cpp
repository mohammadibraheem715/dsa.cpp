#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,tar;
	cin>>n>>tar;

	vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
	}

	map<int,int>mpp;
	for(int i=0;i<n;i++){
		int num=ar[i];
		int look=tar-num;
		if(mpp.find(look) != mpp.end()){
			cout<<"YES";
			exit(0);
		}
		mpp[num]= i;
	}
	 cout<< "NO";
}
