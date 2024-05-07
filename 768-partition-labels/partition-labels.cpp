class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> a;
        string str1="";
        str1=s[0];
      for(int i=1;i<s.length();i++){
        bool flag1=false,flag2=false;
        for(int j=0;j<str1.length();j++){
           if(s[i]==str1[j]){
            flag1=true;
            break;
           }
        }
        for(int l=0;l<str1.length();l++){
            for(int k=i+1;k<s.length();k++){
                if(str1[l]==s[k]){
                    flag2=true;
                    break;
                }
            }
        }


        if(flag1==true || flag2==true){
            str1=str1+s[i];
            cout<<str1<<endl;
        }
        else{
            cout<<i<<endl;
            a.push_back(str1.length());
            str1="";
            str1=s[i];
        }
      }
      a.push_back(str1.length());
      return a;
    }
};