#include<bits/stdc++.h>
using namespace  std;

class Solution {
  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
       unordered_set<int> setK(b.begin(), b.end());
       vector<int> missing;

       for(int num:a){
        if(setK.find(num) == setK.end()){
            missing.push_back(num);

        }
       }

       
    return missing;
        
    }
};
