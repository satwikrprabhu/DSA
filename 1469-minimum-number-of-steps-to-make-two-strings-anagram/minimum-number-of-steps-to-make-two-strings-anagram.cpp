class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        int count=0;
        for(auto i:s){
            m1[i]+=1;
        }
        for(auto i:t){
            m2[i]+=1;
        }
        for(auto i:m1){
            for(auto j:m2){
                if(i.first==j.first){
                    if(i.second!=j.second){
                        int  mini = min(i.second,j.second);
                        count = count + mini;
                    }
                    else{
                        count=count+i.second;
                    }
                }
            }
        }
        return s.length()-count;
    }
};