class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> a;
        int max=candies[0];
        for(auto i:candies){
            if(i>max){
                max=i;
            }
        }
        for(auto i:candies){
            int cand = i + extraCandies;
            if(cand>=max){
                a.push_back(true);
            }
            else{
                a.push_back(false);
            }
        }
        return a;
    }
};