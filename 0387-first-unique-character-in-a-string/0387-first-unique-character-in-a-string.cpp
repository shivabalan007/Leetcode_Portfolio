class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int> fre;
        for(int i=0;i<n;i++){
            fre[s[i]]++;
        }

        for(int i=0;i<n;i++){
            if(fre[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};