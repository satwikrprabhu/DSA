#include<algorithm>
#include <bits/stdc++.h>

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> a;
        map <int,int> m;
        map<int,int> p;
        for(auto i:nums){
            m[i]+=1;
        }
        for(auto i:m){
            p[i.second]+=1;
        }
        for(auto j:p){
            for (auto i = m.rbegin(); i != m.rend(); i++) {
                if(j.first==i->second){
                    for(int k=0;k<j.first;k++){
                        a.push_back(i->first);
                    }
                }
            }
        }
        return a;
    }
};