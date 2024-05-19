class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> arr;
        map<int,int> m;
        vector<int> a;
        int row=score.size();
        int col=score[0].size();
        for(int i=0;i<row;i++){
            m[score[i][k]]=i;
        }
        for(auto i=m.rbegin();i!=m.rend();i++){
            vector <int> a;
            for(int j=0;j<col;j++){
                a.push_back(score[i->second][j]);
            }
            arr.push_back(a);
        }
        return arr;
    }
};