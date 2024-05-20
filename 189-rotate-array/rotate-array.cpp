class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res(n);
        int index;
        for(int i=0;i<n;i++){
            index=((i+k)%n);
            res[index]=nums[i];
        }
        int l=0;
        for(auto j:res){
           nums[l++]=j;
        }
    }
};