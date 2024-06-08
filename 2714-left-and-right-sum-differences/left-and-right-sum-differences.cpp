class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> leftSum,rightSum,sum;
        int i=0,leftCount=0,rightCount=0,n=nums.size();
        int j=n-1;
        while(i<n && j>=0){
            leftSum.push_back(leftCount);
            rightSum.push_back(rightCount);
            leftCount+=nums[i];
            rightCount+=nums[j];
            i++;
            j--;
        }
        i=0;
        j=n-1;
        while(i<n && j>=0){
            sum.push_back(abs(leftSum[i]-rightSum[j]));
            i++;
            j--;
        }
        return sum;
    }
};