class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int cnt = 0;
        int streak = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                streak+=1;
                cnt+=streak;
            }else{
                streak = 0;
            }
        }

        return cnt;
    }
};