class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto j:words){
            if(reverse(j)==j){
                return j;
            }
        }
        return "";
    }

    string reverse(string str){
        string ans="";
        for(int i=str.size()-1;i>=0;i--){
            ans=ans+str[i];
        }
        return ans;
    }
};