class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> arr;
        map<int,int> m;
        int row=score.size();
        for(int i=0;i<row;i++){
            m[score[i][k]]=i;
        }
        for(auto i=m.rbegin();i!=m.rend();i++){
            arr.push_back(score[i->second]);
        }
        return arr;
    }
};