class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(n/i>0){
                n=n-i;
                count++;
            }
            else{
                return count;
            }
        }
        return count;
    }
};