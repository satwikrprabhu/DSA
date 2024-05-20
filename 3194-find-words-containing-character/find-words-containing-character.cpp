class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> res;
        for(int i=0;i<words.size();i++){
            int j=0;
            bool flag=false;
            while(j<words[i].size()){
                if(words[i][j]==x){
                    flag=true;
                }
                j++;
            }
            if(flag==true)
                res.push_back(i);
        }
        return res;
    }
};