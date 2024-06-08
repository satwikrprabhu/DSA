class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0, high=nums.size()-1;
        while(low<=high){
            if(low==high){
                return nums[low];
            }
            if(nums[low]==nums[low+1]){
                low++;
                low++;
            }
            else{
                return nums[low];
            }
            if(nums[high]==nums[high-1]){
                high--;
                high--;
            }
            else{
                return nums[high];
            }
        }
        return -1;
    }
};