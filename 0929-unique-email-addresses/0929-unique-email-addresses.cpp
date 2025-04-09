class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmail;

        for (string email : emails) {
            string local;
            string domain;
            int i = 0;

            // Process local part
            while (email[i] != '@') {
                if (email[i] == '+') break;
                if (email[i] != '.') local += email[i];
                i++;
            }

            // Get domain part from '@' onwards
            domain = email.substr(email.find('@'));

            // Combine and store
            uniqueEmail.insert(local + domain);
        }

        return uniqueEmail.size();
    }
};
