class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> fre(nums1.begin(),nums1.end());
        vector<int> res;

        for(int i=0;i<nums2.size();i++){
            if(fre.count(nums2[i])){
                res.push_back(nums2[i]);
                fre.erase(nums2[i]);
            }
        }
        return res;
    }
};