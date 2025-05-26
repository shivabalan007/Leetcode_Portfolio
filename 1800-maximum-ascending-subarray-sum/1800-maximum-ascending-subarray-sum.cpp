class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        int maxi = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                sum+=nums[i];
            }else{
                sum = nums[i];
            }

            maxi = max(sum,maxi);
        }
        return maxi;
    }
};

/*int maxAscendingSum(vector<int>& nums) {
    int sum = 0;
    int maxi = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i - 1] < nums[i]) {
            if (sum == 0) {
                sum += nums[i - 1];
            }
            sum += nums[i];
        } else {
            sum = 0;
        }
        maxi = max(sum, maxi);
    }
    return maxi;
}*/