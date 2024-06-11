class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
      int ans=tickets[k];
      int count = 0;
      for(int i=0;i<=k;i++){
        if(tickets[i]>=ans){
            count=count + ans;
        }
        else{
            count=count + tickets[i];
        }
      }
      for(int i=k+1;i<tickets.size();i++){
         if(tickets[i]>=ans){
            count=count + ans-1;
        }
        else{
            count=count + tickets[i];
        }
      }
      return count;
    }
};