class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector <string> a;
        a.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            unordered_map<char,int> m1;
            unordered_map<char,int> m2;
            unordered_map<char,int> max;
            bool flag=true;
            for(int j=0;j<words[i-1].length();j++){
                m1[words[i-1][j]]+=1;
            }
            for(int j=0;j<words[i].length();j++){
                m2[words[i][j]]+=1;
            }
            if(m1.size()>m2.size()){
                max=m1;
            }
            else{
                max=m2;
            }
            for(auto k:max){
                if(m1[k.first]==m2[k.first]){
                    continue;
                }
                else{
                    flag=false;
                }
            }
            if(flag==true){
                continue; 
            }
            else{
                a.push_back(words[i]);
            }
        }
        return a;
    }
};