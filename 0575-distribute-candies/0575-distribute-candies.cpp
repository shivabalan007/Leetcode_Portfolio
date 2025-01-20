class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[candyType[i]]++;
        }
        int res=m.size();
        return min(res,n/2);
        
    }
};