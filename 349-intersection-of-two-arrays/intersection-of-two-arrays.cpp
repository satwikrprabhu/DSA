class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        unordered_map<int,int> result;
        vector <int> res;
        for(auto i:nums1){
            m[i]+=1;
        }
        for(auto i:nums2){
            if(m[i]>0){
                result[i]+=1;
            }
        }
        for(auto i:result){
            res.push_back(i.first);
        }
        return res;
    }
};