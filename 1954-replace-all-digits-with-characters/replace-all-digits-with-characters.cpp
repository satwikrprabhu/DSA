class Solution {
public:
    string replaceDigits(string s) {
        string str = "";
        for(int i=0;i<s.length();i++){
            if(i%2!=0){
                str=str+shift(s[i-1],s[i]);
            }
            else
                str=str+s[i];
        }
        return str;
    }

    char shift(char s,char n){
        return s+n-'0';
    }
};