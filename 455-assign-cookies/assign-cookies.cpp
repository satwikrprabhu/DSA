class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0,n=s.size(),m=g.size(),i=0,j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
    while(j<n && i<m){
                if(s[j]>=g[i]){
                    count=count+1;
                    j++;
                    i++;
                }
                else{
                    j++;
                }
        }
    return count;
    }
};