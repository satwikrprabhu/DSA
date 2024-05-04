class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a(2*n);
        int i=0;
        int j=0;
        while(i<n){
            a[j]=nums[i];
            j++;
            j++;
            i++;
        }
        j=1;
        while(i<2*n){
            a[j]=nums[i];
            j++;
            j++;
            i++;
        }
        return a;
    }
};