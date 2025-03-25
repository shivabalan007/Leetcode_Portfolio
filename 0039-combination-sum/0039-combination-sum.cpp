class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int>&curr,vector<vector<int>>&ans,int index){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            int candidate = candidates[i];
            if(candidate <= target){
                curr.push_back(candidate);
                solve(candidates,target-candidate,curr,ans,i);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        // sort(candidates.begin(),candidates.end());
        solve(candidates,target,curr,ans,0);
        return ans;
    }
};