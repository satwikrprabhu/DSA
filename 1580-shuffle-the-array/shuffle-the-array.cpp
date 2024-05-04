class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        int j=0;
        int p=n;
        while(p<2*n){
            a.push_back(nums[j++]);
            a.push_back(nums[p++]);
        }
        return a;
    }
};