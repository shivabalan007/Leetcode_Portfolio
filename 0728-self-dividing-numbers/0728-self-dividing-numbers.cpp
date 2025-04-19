class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            int temp = i;
            int num = i;
            int flag = 0;
            while(temp>0){
                int rem = temp%10;
                if(rem==0){
                    flag = 1;
                    break;
                }
                if(num%rem != 0){
                    flag=1;
                    break;
                }
                 temp = temp/10;
            }
                if(flag == 0){
                    res.push_back(i);
                }
        }
        return res;
    }
};