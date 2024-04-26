class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high){
            mid=low+high+1/2;
            cout<<mid;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else 
                low=mid+1;
        }
        if(target<nums[0]){
            return 0;
        }
        return mid+1;
    }
};