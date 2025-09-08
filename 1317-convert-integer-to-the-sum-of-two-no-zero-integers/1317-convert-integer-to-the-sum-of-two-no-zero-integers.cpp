class Solution {
private:
    bool isNoZero(int x){
            while(x>0){
               if(x%10 == 0) return false;
               x/=10;
            }
            return true;
        }
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int a=n-i;
            if(isNoZero(a) && isNoZero(i)){
                return {i,a};
            }
        }
        return {};
    }
};