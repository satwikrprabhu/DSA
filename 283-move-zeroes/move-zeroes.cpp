class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0,i=0;
        bool flag=true;
        while(i<nums.size()){
            if(nums[i]!=0){
                nums[index++]=nums[i];
            }
            else{
                flag=false;
            }
            if(flag==false){
                nums[i]=0;
            }
            i++;
        }
    }
};