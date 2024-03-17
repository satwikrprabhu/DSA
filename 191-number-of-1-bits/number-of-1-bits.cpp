class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i=0,count=0;
        while(i<32){
            if(n&1){
                count+=1;
            }
            n=n>>1;
            i++;
        }
        return count;
    }
};