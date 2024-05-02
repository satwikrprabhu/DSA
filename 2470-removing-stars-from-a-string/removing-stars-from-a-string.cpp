class Solution {
public:
    string removeStars(string s) {
        int j=0;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                j--;
            }
            else{
                s[j++]=s[i];
            }
        }
        for(int i=0;i<j;i++){
            str+=s[i];
        }
        return str;
    }
};