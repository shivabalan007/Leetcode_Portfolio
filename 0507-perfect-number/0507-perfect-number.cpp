class Solution {
public:
    bool checkPerfectNumber(int num) {
        int temp = num;
        int sum = 1;

        if(num<=1) return false;
        for(int i=2;i<=sqrt(num);i++){
            if(temp % i == 0){
                sum+=i;
                if(i != temp/i){
                sum+= temp/i;
               }
            }  
        }
        if(sum == num){
            return true;
        }
        return false;

    }
};