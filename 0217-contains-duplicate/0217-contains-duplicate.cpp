class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> fre;
        for(auto n:nums){
            if(fre.find(n) != fre.end()){
                return true;
            }
            fre.insert(n);
        }
        return false;
    }
};