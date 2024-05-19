class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map <int,int> m;
        for(auto i:arr){
            m[i]+=1;
        }
        int n=arr.size();
        for(auto i:m){
            if((float)i.second/n>=0.25){
                return i.first;
            }
        }
        return 0;
    }
};