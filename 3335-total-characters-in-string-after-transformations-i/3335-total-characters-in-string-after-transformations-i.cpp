class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int mod = 1e9+7;
        vector<long long>cnt(26,0);

        for(char ch : s){
            cnt[ch-'a']++;
        }

        for(int j=0;j<t;j++){
            vector<long long>tmp(26,0);
            for(int i=0;i<26;i++){
                if(i==25){
                    tmp[0] = (tmp[0] + cnt[i]) % mod;
                    tmp[1] = (tmp[1] + cnt[i]) % mod;
                }else{
                    tmp[i+1] = (tmp[i+1] + cnt[i]) % mod;
                }
            }
            cnt = tmp;
        }

        long long len = 0;
        for(long long c:cnt){
            len = (len+c)%mod;
        }

        return len;
    }
};