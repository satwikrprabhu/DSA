class Solution {
public:
    int kthFactor(int n, int k) {
    vector<int> res;
       for(int i=1;i*i<=n;i++){
        if(n%i==0){
            res.push_back(i);
            if(i!=n/i)
                res.push_back(n/i);
        }
       } 
       sort(res.begin(),res.end());
       if(k>res.size())
            return -1;
       return res[k-1];
    }
};