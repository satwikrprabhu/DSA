class Solution {
public:
    string reverseWords(string s) {
        vector <string> res;
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                str=str+s[i];
            }
            else if(str.size()>0){
                res.push_back(str);
                str="";
            }
        }
        res.push_back(str);
        str="";
        cout<<res.size();
        for(int j=res.size()-1;j>=0;j--){
            if(res[j].size()==0){
                continue;
            }
            else if(j==0){
            str = str + res[j];    
            }
            else{
            str = str + res[j] + " ";
            }
        }
    return str;
    }
};