class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> city;
        for(auto path:paths){
            city.insert(path[0]);
        }

        for(auto path:paths){
            string dest = path[1];
            if(city.find(dest) == city.end()){
                return dest;
            }
        }
        return "";
    }
};