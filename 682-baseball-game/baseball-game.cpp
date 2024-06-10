class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> s;
        for(auto i:operations){
            if(s.empty()){
                s.push_back(stoi(i));
            }
            else if(i=="C"){
                s.pop_back();
            }
            else if(i=="D"){
                s.push_back(2*s.back());
            }
            else if(i=="+"){
                s.push_back(s[s.size()-1]+s[s.size()-2]);
            }
            else{
                s.push_back(stoi(i));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum=sum+s.back();
            s.pop_back();
        }
        return sum;
    }
};