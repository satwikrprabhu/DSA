class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        string str="";
        int j=0;
        for(auto i:key){
            if(i!=' ' && !m[i]){
                m[i]='a'+j;
                j++;
            }
        }
        for(auto i:message){
            if(i==' ')
            str=str + ' ';
            else
            str = str + m[i];
        }
        return str;
    }
};