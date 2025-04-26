class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length() < k) return false;

        sort(s.begin(),s.end());

        unordered_map<char,int> fre;
        for(int i=0;i<s.length();i++){
            fre[s[i]]++;
        }

        int oddCnt = 0;
        for(auto it:fre){
            if(it.second%2 != 0) oddCnt++;
        }
        return oddCnt <= k;  
    }
};