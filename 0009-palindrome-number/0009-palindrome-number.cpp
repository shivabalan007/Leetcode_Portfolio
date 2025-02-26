class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;
        int r = 0; int rev = 0;
        while(temp != 0){
            r = temp%10;
            rev = rev*10+r;
            temp = temp/10;
        }
        return (x == rev);
    }
};