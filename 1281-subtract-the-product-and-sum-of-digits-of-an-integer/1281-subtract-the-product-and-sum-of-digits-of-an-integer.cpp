class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int temp = n;
        while(temp != 0){
            int rev = temp%10;
            product*=rev;
            sum+=rev;
            temp = temp/10;
        }
        return product - sum;
    }
};