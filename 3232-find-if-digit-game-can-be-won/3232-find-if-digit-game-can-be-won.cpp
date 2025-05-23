class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single_sum = 0;
        int double_sum = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10){
                double_sum+=nums[i];
            }else{
                single_sum+=nums[i];
            }
        }

        return(single_sum > double_sum || double_sum > single_sum) ? true : false;
    }
};