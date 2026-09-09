#include <bits/stdc++.h>
using namespace std;

class solution{
    bool containsduplicate(vector<int>& nums){
        int n = nums.size();
        unordered_map<int,int>v;

        for(int i=0;i<n;i++){
            v[nums[i]]++;
            if(v[nums[i]]>1){
            return true;
            }
        }

        return false;

    }
};