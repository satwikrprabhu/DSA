class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       vector<int> v;
       int i=0;
       while(i<A.size()){
        int count=0;
        for(int j=0;j<=i;j++){
            for(int k=0;k<=i;k++){
            if(A[j]==B[k]){
                count++;
            }
            }
        }
        v.push_back(count);
        i++;
       } 
       return v;
    }
};