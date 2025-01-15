class Solution {
public:
    bool possible(vector<int> &bloomDay, int day, int m, int k){
        int n=bloomDay.size();
        int cnt=0; int nofb=0;
         for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                cnt++;
            }else{
                nofb+=(cnt/k);
                cnt=0;
            }
        } 
        nofb+=(cnt/k);
        return nofb>=m;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();;
        long long v=(long long)m*k;
        if(n<v) return -1;
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            int p=possible(bloomDay,mid,m,k);
            if(p){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};