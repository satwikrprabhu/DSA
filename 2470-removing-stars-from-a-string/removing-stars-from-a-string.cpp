#include<stack>
class Solution {
public:
    string removeStars(string s) {
        string str="",rev="";
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            stk.push(s[i]);
            if(stk.top()=='*'){
                stk.pop();
                stk.pop();
            }
        }
        while(!stk.empty()){
            str+=stk.top();
            stk.pop();
        }
        reverse(str.begin(), str.end()); 
        return str;
    }
};