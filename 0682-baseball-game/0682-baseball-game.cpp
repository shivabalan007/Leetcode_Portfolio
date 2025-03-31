class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res; int ans = 0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                res.pop_back();

            }else if(operations[i]=="D"){
                res.push_back(2*res.back());


            }else if(operations[i]=="+"){
                int a = res[res.size()-2] + res[res.size()-1];
                res.push_back(a);

            }else{
                res.push_back(stoi(operations[i]));
            }
        }
        for(int i=0;i<res.size();i++){
            ans+=res[i];
        }
        return ans;
    }
};