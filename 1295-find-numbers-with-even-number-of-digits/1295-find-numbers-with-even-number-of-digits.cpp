class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            int cnt = 0;
            int temp = nums[i];
            while(temp != 0){
                int rem = temp%10;
                cnt++;
                temp = temp/10;
            }
            if(cnt % 2 == 0) res++;
        }
        return res;
    }
};