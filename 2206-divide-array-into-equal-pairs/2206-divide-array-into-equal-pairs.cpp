class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> pair;
        for(int i=0;i<nums.size();i++){
            pair[nums[i]]++;
        }
        
        for(auto it:pair){
            if(it.second % 2 != 0){
                return false;
            }
        }

        return true;
        
    }
};