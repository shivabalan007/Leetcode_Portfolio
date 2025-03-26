class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        int temp = num;
        while(num > 0){
            int rev = num % 10;
            if(temp % rev == 0 && rev != 0 ) ans = ans + 1;
            num = num / 10;
            
        }
        return ans;
        
    }
};