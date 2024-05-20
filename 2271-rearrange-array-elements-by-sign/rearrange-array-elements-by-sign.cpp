class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,res;
        for(auto i:nums){
            if(i>0) pos.push_back(i);
            else if(i<0) neg.push_back(i);
        }
        int m=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(m<pos.size()) res.push_back(pos[m++]);
            if(n<neg.size()) res.push_back(neg[n++]);
        }
        return res;
    }
};