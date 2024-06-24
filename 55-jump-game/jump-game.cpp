class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),maxi=nums[0];
        for(int i=0;i<=maxi;i++){
            if(i+nums[i]>=n-1 && i<=maxi){
                cout<<i+nums[i]<<" "<<n-1;
                return true;
            }
        maxi = max(maxi,nums[i]+i);
        }
        return false;
    }
};