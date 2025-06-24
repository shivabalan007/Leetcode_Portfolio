class Solution {
public:
    int maxScore(string s) {
        int total_ones = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                total_ones++;
            }
        }
        int left_zero = 0; int right_ones = total_ones;
        int max_score = INT_MIN;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='0'){
                left_zero+=1;
            }else{
                right_ones-=1;
            }
            
            int score = left_zero + right_ones;
            max_score = max(score, max_score);

        }
        return max_score;
    }
};