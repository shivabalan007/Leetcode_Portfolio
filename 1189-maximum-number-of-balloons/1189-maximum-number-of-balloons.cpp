class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        unordered_map<char,int> fre,s_fre;
        for(int i=0;i<text.size();i++){
            fre[text[i]]++;
        }

        for(int i=0;i<s.size();i++){
            s_fre[s[i]]++;
        }
        int pre = fre['b']/s_fre['b'];
        for(auto i:s_fre){
            int cur = fre[i.first]/i.second;
            pre = min(pre, cur);
        }

        return pre;

    }
};