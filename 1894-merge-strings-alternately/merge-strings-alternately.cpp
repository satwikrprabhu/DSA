class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int m=word1.size(),n= word2.size();
      int w1=0,w2=0;
      string str="";
      int mini=min(m,n);
      for(int i=0;i<mini;i++){
        str=str+word1[w1];
        w1++;
        str=str+word2[w2];
        w2++;
      } 
       if(w1!=m){
        int j=w1;
        while(w1<m){
            str=str+word1[w1];
            w1++;
        }
      }
        if(w2!=n){
        int j=w2;
        while(w2<n){
            str=str+word2[w2];
            w2++;
        }
      }

      return str;
    }
};