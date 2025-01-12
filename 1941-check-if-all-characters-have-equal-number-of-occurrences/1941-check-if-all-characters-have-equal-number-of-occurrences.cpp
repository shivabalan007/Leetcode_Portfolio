class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> fre;
        for(int i=0;i<s.size();i++){
            fre[s[i]]++;
        }
        int refcnt=fre[s[0]];
        for(auto it=fre.begin();it!=fre.end();it++){
            if(refcnt!=it->second) return false;
        }
        return true;
    }
};