class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> res;
        vector<pair<string,string>> letter;
        vector<pair<string,string>> digit;
        for(int i=0;i<logs.size();i++){
            string s = "";
            string t = "";
            bool flag = false;
            for(int j=0;j<logs[i].size();j++){
                if(logs[i][j]==' ' && flag==false){
                    flag = true;
                    continue;
                }
                if(flag==false) s+=(char)logs[i][j]; 
                else t+=(char)logs[i][j];
            }
            if(t[0]>='a' && t[0]<='z') letter.push_back({t,s});
            else digit.push_back({t,s});
        }
        sort(letter.begin(),letter.end());
        for(auto i:letter) res.push_back(i.second+" "+i.first);
        for(auto i:digit) res.push_back(i.second+" "+i.first);
        return res;
    }
};