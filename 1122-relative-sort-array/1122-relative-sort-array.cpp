class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        unordered_map<int, int> fre;

        for(int i = 0;i<arr1.size();i++){
            fre[arr1[i]]++;
        }

        for(int i=0;i<arr2.size();i++){
            int num = arr2[i];
            if(fre.count(num)){
                int cnt = fre[num];
                while(cnt--){
                    res.push_back(num);
                }
                fre.erase(arr2[i]);
            }
        }

        vector<int> rem;
        for(auto& [key,value] : fre){
            for(int i=0;i<value;i++){
                rem.push_back(key);
            }
        }

        sort(rem.begin(), rem.end());

        for(int val:rem){
            res.push_back(val);
        }

        return res;

    }
};