class Solution {
public:
    int maxFreqSum(string s) {
        int fre[26], maxvow=0, maxcons=0;
        for(int i=0;i<s.size();i++){
            int a = s[i]-'a';
            fre[a]++;
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                maxvow = max(maxvow, fre[a]);
            }else{
                maxcons = max(maxcons, fre[a]);
            }
        }
        return maxvow+maxcons;
    }
};