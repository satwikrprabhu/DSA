class Solution {
public:
    int reverse(int x) {
        long int n,sum=0;
        while(x!=0){
            n=x%10;
            sum=sum*10+n;
            x=x/10;
        }
        long int power=pow(2,31);
        if(sum>power-1 || sum < -power){
            return 0;
        }
        return sum;
    }
};