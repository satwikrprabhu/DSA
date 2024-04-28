#include<map>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min=strs[0].length();
        int max=0;
        string maxstr="";
        string str=strs[0];
        string ans="";
        for(auto i:strs){
            if(min>i.length()){
                min=i.length();
                str=i;
            }
        }        
        for(int j=0;j<min;j++){
            bool flag=true;
            for(auto i:strs){
                if(str[j]==i[j]){
                    continue;
                }
                else{
                    flag=false;
                    return ans;
                    break;
                }
            }
            if(flag==false){
                ans="";
                continue;
            }
            else{
            ans=ans + str[j];
            }
        }
        return ans;
    }
};