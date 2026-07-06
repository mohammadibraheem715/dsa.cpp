#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maxSubarraySum(vector<int>& arr, int k) {
        int n= arr.size();
        vector<long long> pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }

        long long sum = pre[k-1];

        for(int i=k; i<arr.size();i++){
            long long cur_sum= pre[i]-pre[i-k];
            sum=max(sum,cur_sum);
        }
        return sum;

        
    }
};