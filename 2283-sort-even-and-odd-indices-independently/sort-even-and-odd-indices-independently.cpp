class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        int n=nums.size();
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        int num;
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        int e=0,o=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]=even[e++];
            }
            else{
                arr[i]=odd[o++];
            }
        }
        
        return arr;
    }
};