class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> a;
        for(auto i:words){
            string str="";
            for(int j=0;j<i.length();j++){
                if(str.length()==0 && i[j]==separator){
                    continue;
                }
                else if(i[j]==separator){
                    a.push_back(str);
                    str="";
                }
                else if(j==i.length()-1){
                    str=str+i[j];
                    a.push_back(str);
                    str="";
                }
                else{
                    str=str+i[j];
                    cout<<str<<"\t";
                }
            }
            cout<<endl;
        }
        return a;
    }
};