class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map <int,int> m;
        vector<int> res;
        int n = nums2.size();
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                m[nums2[i]] = -1;
                s.push(nums2[i]);
            }
            else if(s.top()<nums2[i]){
            while(!s.empty() && nums2[i]>s.top()){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]]=-1;
                s.push(nums2[i]);
            }
            else{
                m[nums2[i]]=s.top();
                s.push(nums2[i]);
            }
            }
            else{
                m[nums2[i]]=s.top();
                s.push(nums2[i]);
            }
        }
        for(auto i:nums1){
            res.push_back(m[i]);
        }
        return res;
    }
};