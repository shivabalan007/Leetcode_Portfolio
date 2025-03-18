class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int> fre;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        int cnt = 0;
        for(auto it=fre.rbegin(); it!=fre.rend(); it++){
            cnt+=it->second;
            if(cnt >= k){
                return it->first;
            }
        }
        return -1;
        
    }
};