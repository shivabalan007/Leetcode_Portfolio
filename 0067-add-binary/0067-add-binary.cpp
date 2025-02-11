class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size();
        int m=b.size();
        int i=n-1;
        int j=m-1;
        string res="";
        int carry=0;

        while(i>=0 || j>=0 || carry ){
            if(i>=0){
                carry+=a[i--]-'0'; //String to int
            }
            if(j>=0){
                carry+=b[j--]-'0';
            }
            res+=carry%2 +'0';
            carry=carry/2;
        }
        reverse(res.begin(),res.end());
        return res;

    }
};