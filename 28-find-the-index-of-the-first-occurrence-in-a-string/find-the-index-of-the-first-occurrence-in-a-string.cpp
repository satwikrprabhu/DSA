class Solution {
public:
    int strStr(string haystack, string needle) {
        bool flag=false;
        if(haystack.size()<needle.size())
        {
            return -1;
        }
        for(int i=0;i<haystack.size()-needle.size()+1;i++){
            for(int j=0;j<needle.size();j++){
                if(haystack[i+j]==needle[j]){
                    if(j==needle.size()-1){
                        flag=true;
                    }
                    else
                        continue;
                }
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(flag==true){
                return i;
            }

        }
        return -1;
    }
};