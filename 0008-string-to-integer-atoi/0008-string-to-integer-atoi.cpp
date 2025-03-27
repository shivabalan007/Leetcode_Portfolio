class Solution {
public:
    int myAtoi(string s) {
        int i=0; 
        int n=s.length();
        while(i<n && s[i]==' '){
            i++;
        }

        int sig=1;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-'){
                sig=-1;
            }
            i++;
        }

        long long res=0;
        while(i<n && isdigit(s[i])){
            res=res*10+(s[i]-'0');
            if(res*sig>INT_MAX){
                return INT_MAX;
            }else if(res*sig<INT_MIN){
                return INT_MIN;
            }
            i++;
        }

        return res=(int)(res*sig);
        
    }
};