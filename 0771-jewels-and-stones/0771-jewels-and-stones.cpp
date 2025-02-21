class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0; unordered_map<char,int> mp;
        for(int i=0;i<stones.size();i++){
            mp[stones[i]]++;
        }
        for(int i=0;i<jewels.size();i++){
            cnt+=mp[jewels[i]];
        }
        /*for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                    cnt++;
                }
            }
        }*/
        return cnt;
        
    }
};