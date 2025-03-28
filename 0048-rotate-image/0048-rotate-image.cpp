class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int i=0;i<n;i++){  //i=0,i<n-1
            for(int j=0;j<i;j++){ //j=i+1,j<n
                swap(matrix[i][j],matrix[j][i]);
            }
        } 
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};