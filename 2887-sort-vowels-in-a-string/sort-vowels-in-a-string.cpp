class Solution {
public:
    string sortVowels(string s) {
        vector<char> res;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i]))
                res.push_back(s[i]);
        }
        sort(res.begin(),res.end());
        cout<<s.size();
        cout<<res.size();
        int j=0;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i]))
                s[i]=res[j++];
        }
        return s;
    }
    bool isVowel(char a){
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            return true;
        }
        return false;
    }
};