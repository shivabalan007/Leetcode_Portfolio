class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt = 0;
        vector<int> num;
        for(int i=0;i<nums.size();i++){
            if(num.empty() || num.back()!=nums[i]){
                num.push_back(nums[i]);
            }
        }
        for(int i = 1;i<num.size()-1;i++){
            if((num[i-1]<num[i] && num[i]>num[i+1]) || (num[i-1]>num[i] && num[i]<num[i+1])){
                cnt++;
            }
        }

        return cnt;

    }
};