class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=0;
        string str="";
        if(s==" "){
            return 1;
        }
        for(int i=0;i<s.length();i++){
            for(int j=0;j<str.length();j++){
            if(str[j]==s[i]){
                if(str.length()>max){
                    max=str.length();
                }
                i=i-str.length()+1;
                str="";
            }
            }
            str=str+s[i];
        }
        if(str.length()>max){
                    max=str.length();
                }
                
    return max;
    }
};