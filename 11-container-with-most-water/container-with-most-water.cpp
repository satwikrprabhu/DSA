class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0,i=0,j=height.size()-1,h,b,v;
        while(i<j){
            if(height[i]>height[j])
                h=height[j];
            else
                h=height[i];
            b=j-i;
            v=h*b;
            if(v>max)
                max=v;
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return max;
    }
};