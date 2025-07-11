class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> fre;

        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        
        sort(nums.begin(), nums.end(), [&](int a, int b){
        if(fre[a] != fre[b]){
            return fre[a] < fre[b];
        }else{
            return a>b;
        }
    });

            return nums;

    }
};