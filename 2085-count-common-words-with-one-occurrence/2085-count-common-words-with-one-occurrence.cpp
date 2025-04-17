class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> fre1, fre2;
        int cnt = 0;

        for (string &word : words1) {
            fre1[word]++;
        }

        for (string &word : words2) {
            fre2[word]++;
        }

        for (auto &[word, freq] : fre1) {
            if (freq == 1 && fre2[word] == 1) {
                cnt++;
            }
        }

        return cnt;
    }
};
