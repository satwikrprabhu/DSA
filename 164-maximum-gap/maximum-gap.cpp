class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        else{
            sort(nums.begin(),nums.end());
            int max=0;
            for(int j=0;j<nums.size()-1;j++){
              if((nums[j+1]-nums[j])>max){
                max=nums[j+1]-nums[j];
              }
            }
        return max;
        }
    }
};
