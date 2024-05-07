class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
            if(s.length()==0){
                return true;
            }
            while(j<t.length()){
                if(s[i]==t[j]){
                    i++;
                }
                if(i==s.length()){
                    return true;
                }
                j++;
            }
        return false;
    }
};