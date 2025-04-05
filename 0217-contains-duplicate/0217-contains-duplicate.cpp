class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> fre;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }

        for(auto it:fre){
            if(it.second>1){
                return true;
            }
        }
        return false;
        
    }
};