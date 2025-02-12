class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==0) return {};
        vector<vector<int>> matrix(n,vector<int>(n,0));
        int top=0,bot=n-1,lef=0,rig=n-1; int num=1;
        
        while(top<=bot && lef<=rig){
            for(int i=lef;i<=rig;i++){
                matrix[top][i]=num++;
            }
            top++;
            for(int i=top;i<=bot;i++){
                matrix[i][rig]=num++;
            }
            rig--;
            if(top<=bot){
            for(int i=rig;i>=lef;i--){
                matrix[bot][i]=num++;
            }
            bot--;}
            if(lef<=rig){
            for(int i=bot;i>=top;i--){
                matrix[i][lef]=num++;
            }
            lef++;}
        }
        return matrix;
        
    }
};