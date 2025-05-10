class Solution {
public:
    long long minSum(vector<int>& num1, vector<int>& num2) {
        long long sn1 = 0, sn2 = 0, n1 = 0, n2 = 0;
        for(int a:num1){
            n1 += a == 0;
            sn1 += max(a,1);
        }

        for(int b:num2){
            n2 += b == 0;
            sn2 += max(b,1);
        }
        
        if(sn1 < sn2 && n1 == 0) return -1;
        if(sn1 > sn2 && n2 == 0) return -1;

        return (max(sn1,sn2));
    }
};