class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res^=nums[i];
        }
        return res;
    
        /*map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:nums){
            if(it.second==1){
                return it.first;
            }
        } return -1;*/

    }
};