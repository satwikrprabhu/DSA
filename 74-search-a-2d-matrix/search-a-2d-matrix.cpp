class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row,col;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]>target && i!=0){
                row=i-1;
                break;
            }
            else{
                row=i;
            }
        }
        col=matrix[row].size();
        for(int i=0;i<col;i++){
            if(matrix[row][i]==target){
                return true;
            }
        }
        return false;
    }
};