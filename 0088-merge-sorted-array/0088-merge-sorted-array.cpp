class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int l=0,r=0;
        vector<int> res;
        while(l<m && r<n){
            if(num1[l]<=num2[r]){
                res.push_back(num1[l]);
                l++;
            }else{
                res.push_back(num2[r]);
                r++;
            }
        }
        while(l<m){
            res.push_back(num1[l]);
            l++;
        }
        while(r<n){
            res.push_back(num2[r]);
            r++;
        }
        num1.clear();
        num1=res;
    }
};