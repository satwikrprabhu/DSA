class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0, j=nums.size()-1,n=nums.size()-1;
        cout<<j<<n;
        while(i<=j){
            if(i==j){
                return i;
            }
            if(i==0){
                if(nums[i]>nums[i+1]){
                    return i;
                }
            }
            if(j==n){
                if(nums[j]>nums[j-1]){
                    return j;
                }
            }
            else if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                    return i;
                }
            else if(nums[j]>nums[j-1] && nums[j]>nums[j+1]){
                    return j;
                }
                i++;
                j--;
            
        }
        return -1;
    }
};