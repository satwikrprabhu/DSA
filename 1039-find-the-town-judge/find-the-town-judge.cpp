class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_set<int> s;
        unordered_map<int,int> m;
        int count=0;
        int sum1=0,sum2=0;
        for(int i=0;i<trust.size();i++){
         s.insert(trust[i][0]);
        }
        for(auto i:s){
             sum1=sum1+i;
        }
        for(int i=1;i<=n;i++){
            sum2=sum2+i;
        }
        int ans = abs(sum2-sum1);
        for(int i=0;i<trust.size();i++){
            if(trust[i][1]==ans){
                m[ans]++;
            }
        }
  
        if(m[ans] == n-1 && s.size()==n-1){
            return ans;
        }
        else{
            return -1;
        }
    }
};