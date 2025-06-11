class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> new_allowed(allowed.begin(),allowed.end());
        int cnt=0;

        for(int i=0;i<words.size();i++){
            bool isconsistent = true;
            for(int j=0;j<words[i].size();j++){
                if(new_allowed.find(words[i][j]) == new_allowed.end()){
                    isconsistent = false;
                    break;
                }

            }
            if(isconsistent) cnt++;
        }
        return cnt;

    }
};