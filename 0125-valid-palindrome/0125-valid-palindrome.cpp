class Solution {
public:
    /*bool isPalindrome(string s,int i=0) {
       int n=s.size();
        if(i>n/2) return true;
        if(s[i]!=s[n-i-1]) return false;
        return isPalindrome(s,i+1);
        
    }*/
    bool isPalindrome(string s){
        int l=0,r=s.size()-1;
        while(l<r){
            while(l<r && !isalnum(s[l])){
                l++;
            }
            while(l<r && !isalnum(s[r])){
                r--;
            }
            if(tolower(s[l++])!=tolower(s[r--])){
                return false;
            }
        }
        return true;

    }
    
};