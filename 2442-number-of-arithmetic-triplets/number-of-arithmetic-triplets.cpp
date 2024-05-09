class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
       for(int i=0;i<nums.size();i++){
        int k=i;
        bool flagb=false,flagc=false;
        while(k < nums.size()){
            if(nums[k]==(nums[i]+diff))
                flagb=true;
            if(nums[k]==(nums[i]+diff+diff))
                flagc=true;
            k++;    
        }
        if(flagb==true && flagc==true)
            count++;
       }
       return count; 
    }
};