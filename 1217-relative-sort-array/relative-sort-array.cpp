class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> m;
        vector<int> res;
        vector<int> rem;
        for(auto i:arr1){
            m[i]+=1;
        }
        for(auto j:arr2){
            if(m[j]>0){
                while(m[j]!=0){
                    m[j]--;
                    res.push_back(j);
                }
            }
        }
        for(auto k:arr1){
            if(m[k]>0){
                while(m[k]!=0){
                    m[k]--;
                    rem.push_back(k);
                }
            }
        }
        sort(rem.begin(),rem.end());
        for(auto i:rem)
            res.push_back(i);
        return res;
    }
};