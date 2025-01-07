class Solution {
public:
    int lower(vector<int> &arr, int n, int target){
        int low=0; int high=n-1; int res=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=target){
                res=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return res;
    }
    int upper(vector<int> &arr, int n, int target){
        int low=0; int high=n-1; int res=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>target){
                res=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return res; 
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lower(nums,n,target);
        if(lb==n || nums[lb]!=target) return{-1,-1};
        return {lb,upper(nums,n,target)-1};

        
    }
};