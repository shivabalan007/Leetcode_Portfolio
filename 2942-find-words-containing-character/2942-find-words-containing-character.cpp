class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    if(res.empty()) res.push_back(i);
                    if(res.size()>0 && res.back()!=i)
                    res.push_back(i);
                }
            }
        }
        return res;
    }
};