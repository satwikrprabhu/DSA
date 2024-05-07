#include<algorithm>
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> m;
        vector<int> a;
        for(int i=0;i<s.length();i++){
            m[s[i]]=i;
        }
        int maxNum=0,prev=-1;
        for(int i=0;i<s.size();i++){
           maxNum=max(maxNum,m[s[i]]);
           if(i==maxNum){
            a.push_back(maxNum-prev);
            prev=maxNum;
           }
        }
        return a;
    }
};

