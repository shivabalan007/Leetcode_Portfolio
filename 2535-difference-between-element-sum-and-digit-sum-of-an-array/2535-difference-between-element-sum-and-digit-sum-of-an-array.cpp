class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int e_sum = 0;
        int d_sum = 0;
        for(int i=0;i<nums.size();i++){
            e_sum+=nums[i];
            int temp = nums[i];
            while(temp!=0){
                int rem = temp%10;
                d_sum+= rem;
                temp = temp/10;
            }
        }
        return abs(e_sum - d_sum);
    }
};