class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>res=heights;
        sort(res.begin(),res.end());
        int i=0,count=0;
        while(i<heights.size()){
            if(res[i]!=heights[i]){
                count++;
            }
            i++;
        }
        return count;
    }
};