class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> cnt(10, 0);

        for (int i = 0; i < digits.size(); i++) {
            cnt[digits[i]]++;
        }
         
        vector<int> res; 
        for (int i = 100; i < 999; i += 2) {
            vector<int> curcnt(10, 0);
            int temp = i;
            while (temp != 0) {
                curcnt[temp % 10]++;
                temp = temp / 10;
            }

            bool flag = true;
            for (int i = 0; i < 10; i++) {
                if (curcnt[i] > cnt[i]) {
                    flag = false;
                    break;
                }
            }
            
            if (flag) {
                res.push_back(i);
            }
        }

        return res;
    }
};