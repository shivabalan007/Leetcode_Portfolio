class Solution {
public:
    int mostWordsFound(vector<string>& st) {
        int n=st.size();
        int maxi = 0;
        for(int i=0;i<n;i++){
            int cnt = 1;
            for(int j=0;j<st[i].size();j++){
                if(st[i][j]==' '){
                    cnt++;
                }
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};