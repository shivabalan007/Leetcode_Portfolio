class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> fre;
        vector<int> res(arr.begin(), arr.end());
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());

        for(int i=0;i<res.size();i++){
            fre[res[i]]=i+1;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=fre[arr[i]];
        }
        return arr;

    }
};