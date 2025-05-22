class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int l=0; int r=words[i].size()-1;
            string temp = words[i];
            while(l<r){
                if(temp[l]!=temp[r]){
                    break;
                }
                else{
                    l++;
                    r--;
                }
            }
            if(l>=r){
                return temp;
            }
        }
        return "";
    }
};