class Solution {
public:
    int minSteps(string s, string t) {
        int a[26]={0};
        int i=0;
        while(i<s.size()){
            a[t[i]-'a']++;
            a[s[i]-'a']--;
            i++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            count +=max(0,a[i]);
        }
        return count;
    }
};