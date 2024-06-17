class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        int i=0;
        string str="";
        while(i<s.size()){
            stk.push(s[i]);
            if(stk.top()=='('){
               while(!stk.empty()){
                cout<<i;
                i++;
                if(s[i]=='('){
                    stk.push(s[i]);
                    str=str+s[i];
                }
                else{
                    stk.pop();
                    if(!stk.empty())
                        str=str+s[i];
                }
               }
            }
            i++;
        }
        return str;
    }
};