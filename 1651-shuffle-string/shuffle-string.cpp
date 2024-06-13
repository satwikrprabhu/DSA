class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        string str="";
        for(int i=0;i<s.length();i++){
            m[indices[i]]=s[i];
        }
        for(auto i:m){
            str=str+i.second;
        }
        return str;
    }
};