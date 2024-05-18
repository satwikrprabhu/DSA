class Solution {
public:
    int mySqrt(int x) {
        long ans;
       for(long i=0;i*i<=x;i++){
        ans=i;
       }
       return ans;
    }
};