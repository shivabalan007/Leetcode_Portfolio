class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        vector<string> row(n);
        int j=0,d=1;
        for(int i=0;i<s.size();i++){
            row[j]+=s[i];

            if(j==n-1) d=-1;
            else if(j==0) d=1;
            j+=d;
        }

        string res="";
        for(auto& it:row){
            res+=it;
        }
        return res;
        
    }
};