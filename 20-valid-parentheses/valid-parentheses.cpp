#include<stack>
class Solution {
public:
    bool isValid(string str) {
      stack <int> s;
      for(int i=0;i<str.length();i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else if((s.top()=='(' && str[i]==')') || (s.top()=='[' && str[i]==']') || (s.top()=='{' && str[i]=='}')){
             s.pop();
        }
        else{
             s.push(str[i]);
        }
      }
      if(s.empty()){
        return true;
      } 
      else
        return false;
    }
};