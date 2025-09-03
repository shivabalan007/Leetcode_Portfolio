class Solution {
public:
    bool isHappy(int n) {
        int temp = n;
        while(temp != 0){
            int last = temp%10;
            temp = temp/10;
            int total = last*last + temp*temp;

            temp = total;
            if(total==1) return true;
            
        }

        return false;
    }
};