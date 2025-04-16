class Solution {
public:
    int getLucky(string s, int k) {
        unordered_map<char,int> alpha;
        int cnt = 0;
        for(int i=1;i<=26;i++){
            alpha['a'+i-1] = i;
        }
        string nstr="";
        for(char ch:s){
            nstr+=to_string(alpha[ch]);
        }

        while(cnt < k) {
            int sum = 0;
            for(char ch : nstr) {
                sum += ch - '0'; 
            }
            nstr = to_string(sum); 
            cnt++;
        }

        return stoi(nstr); 
    }
};