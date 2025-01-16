class Solution {
public:
    int sumofdiv(vector<int> &nums, int m){
        int n=nums.size(); int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)(nums[i])/(double)(m));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1; int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(sumofdiv(nums,mid)<=threshold){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};