class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max_diff = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            max_diff = max(abs(nums[i]-nums[(i+1)%n]), max_diff);
        }
        return max_diff;
    }
};