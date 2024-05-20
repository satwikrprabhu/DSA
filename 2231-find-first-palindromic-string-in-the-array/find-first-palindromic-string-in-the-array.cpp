class Solution {
public:
    bool reverse(string str){
        int i=0,j=str.length()-1;
        while(i<=j){
            if(str[i]==str[j]){
                i++;
                j--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto k:words){
            if(reverse(k)==true){
                return k;
            }
        }
        return "";
    }
};