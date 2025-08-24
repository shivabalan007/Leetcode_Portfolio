class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> fre;
        for(int i=0;i<s.size();i++){
            fre[s[i]]++;
            if(fre[s[i]]==2){
                return s[i];
            }
        }
        return ' ';
    }
};