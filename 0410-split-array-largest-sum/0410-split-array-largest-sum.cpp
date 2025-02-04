class Solution {
public:
int cntpart(vector<int> &nums, int mid){
        int part=1; long long subarr=0;
        for(int i=0;i<nums.size();i++){
            if(subarr+nums[i]<=mid){
                subarr+=nums[i];
            }else{
                part++;
                subarr=nums[i];
            }

        }
        return part;
    }
    int splitArray(vector<int>& nums, int k) {
         int n=nums.size(); int res=0;
         int low=*max_element(nums.begin(),nums.end());
         int high=accumulate(nums.begin(),nums.end(),0);
         while(low<=high){
            int mid=(low+high)/2;
            if(cntpart(nums,mid)>k){
                low=mid+1;

            }else{
                high=mid-1;
            }
        }
        return low;
    }
};