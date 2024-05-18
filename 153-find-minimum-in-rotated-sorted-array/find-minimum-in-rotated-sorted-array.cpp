class Solution {
public:
    int findMin(vector<int>& nums) {
       int low = 0,high=nums.size()-1;
       while(nums[low]>nums[high]){
        low++;
       } 
       return nums[low];
    }
};