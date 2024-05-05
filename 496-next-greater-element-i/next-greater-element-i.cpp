class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> a;
        for(auto i:nums1){
            for(int j=0;j<nums2.size();j++){
                if(i==nums2[j]){
                    while(i>=nums2[j]){
                        if(j==nums2.size()-1){
                            break;
                        }
                        j++;
                    }
                    if(i<nums2[j]){
                        a.push_back(nums2[j]);
                        break;
                    }
                    else{
                        a.push_back(-1);
                        break;
                    }
                }
            }
        }
        return a;
    }
};