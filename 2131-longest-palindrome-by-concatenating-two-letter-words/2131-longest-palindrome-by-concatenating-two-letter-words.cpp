class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> fre;
        int res = 0;

        for(int i = 0;i<words.size();i++){
            string s = words[i];
            string r = s;
            reverse(r.begin(),r.end());
            if(fre[r]>0){
                res+=4;
                fre[r]--;
            }else{
                fre[s]++;
            }

        }

        for(auto i: fre){
            if(i.first[0] == i.first[1] && i.second>0){
                return res+2;
            }
        }

        return res;
    }
};