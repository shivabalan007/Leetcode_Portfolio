class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        bool is_vowel = false;
        bool is_cons = false;
        if(n<3)  return false;
        for(int i=0;i<word.size();i++){
            if(!isalnum(word[i])) return false;
            if(isalpha(word[i])){
                char lower = tolower(word[i]);
            if(lower =='a' || lower =='e' ||lower =='i' ||lower =='o' || lower =='u'){
                    is_vowel = true;
                }else{
                    is_cons = true;
                }

            }
        }

        return is_vowel && is_cons;
    }
};