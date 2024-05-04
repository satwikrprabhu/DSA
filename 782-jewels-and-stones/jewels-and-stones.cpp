class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      int count=0;
      char m[256];
      for(int i=0;i<stones.length();i++){
        m[stones[i]]+=1;
      }  
      for(int i=0;i<jewels.length();i++){
        count = count + m[jewels[i]];
      }
      return count;
    }
};