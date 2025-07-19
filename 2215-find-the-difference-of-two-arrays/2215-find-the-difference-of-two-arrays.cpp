class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> dis_num1, dis_num2;

        for(int n: set1){
            if(set2.count(n) == 0){
                dis_num1.push_back(n);
            }
        }


         for(int n: set2){
            if(set1.count(n) == 0){
                dis_num2.push_back(n);
            }
        }

        return{dis_num1, dis_num2};
    }
};