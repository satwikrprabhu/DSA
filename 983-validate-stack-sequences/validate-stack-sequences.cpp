class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        int j=0;
        stack<int> s;
        while(i<pushed.size()){
            s.push(pushed[i]);
            i++;
            while(!s.empty()){
                if(s.top()==popped[j]){
                    s.pop();
                    j++;
                }
                else
                    break;
            }
        }
        return s.empty();
    }
};