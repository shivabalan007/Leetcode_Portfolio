class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> fre;
        for(int i=0;i<s.size();i++){
            fre[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            if(fre.find(t[i]) == fre.end() || fre[t[i]]==0){
                return false;
            }
            fre[t[i]]--;
        }
        return true;
        
    }
};