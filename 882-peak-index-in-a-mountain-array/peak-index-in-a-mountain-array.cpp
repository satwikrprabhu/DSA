class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1,mid;
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid+1]>arr[mid]){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        return -1;
    }
};