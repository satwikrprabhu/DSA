class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        bool flag=false;
        for(int i=n-1;i>=0;i--){
            int k=(int)num[i];
            if(flag==false && k%2==1){
                flag=true;
            }
            else if(flag==false){
                num.pop_back();
            }
        }
        return num;
    }
};