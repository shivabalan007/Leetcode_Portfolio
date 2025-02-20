class Solution {
public:
    int scoreOfString(string s) {
        vector<int> res;
        for(int i=0;i<s.size();i++){
            res.push_back((int)s[i]);
        }
        int abs_dif=0;
        for(int i=0;i<res.size()-1;i++){
            abs_dif+=abs(res[i]-res[i+1]);
        }
        return abs_dif;
    }
};