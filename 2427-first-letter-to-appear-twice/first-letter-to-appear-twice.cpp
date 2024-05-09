class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> m;
        for(auto i:s){
            m[i]++;
            if(m[i]==2){
                return i;
            }
        }
        return 's';
    }
};