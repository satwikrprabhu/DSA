class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> wordfreq;
        vector<int> queryfreq;
        vector<int> res;

        //word frequency
        for(auto i:words){
        unordered_map<char,int> m;
        char ans='z';
            for(auto j:i){
             ans=min(ans,j);
             m[j]+=1;
            }
            wordfreq.push_back(m[ans]);
        }
        // end of word frequency

        // queries frequency
         for(auto i:queries){
        unordered_map<char,int> m2;
        char ans='z';
            for(auto j:i){
             ans=min(ans,j);
             m2[j]+=1;
            }
            queryfreq.push_back(m2[ans]);
        }
        //end of queries frequncy

        for(auto i:queryfreq){
            int count=0;
            for(auto j:wordfreq){
                if(j>i){
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};