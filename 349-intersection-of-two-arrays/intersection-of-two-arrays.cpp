class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i=0,j=0,m=nums1.size(),n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<m && j<n){
            if(i>0 && nums1[i-1]==nums1[i]){
                i++;
                continue;
            }
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return result;
    }
};