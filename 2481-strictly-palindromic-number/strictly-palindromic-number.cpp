class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int first;
        for(int i=2;i<=n-2;i++){
            long int sum=0;
            int rem;
            while(n>0){
                rem=n%i; 
                n=n/i; 
                if(n==1){
                    sum = sum*100 + n;
                    break;
                }
                sum=sum*10 + rem;
            }
            long int sec = rev(sum);
                if(sum==sec){
                    continue;
                }
                else{
                    return false;
                }
        }
    return true;
    }
    int rev(int sum){
        int i=0;
        int second=0;
        int rem;
        while(i>0){
            rem = sum%10;
            sum=sum/10;
            second=second*10 + rem;
        }
        return second;
    }
};