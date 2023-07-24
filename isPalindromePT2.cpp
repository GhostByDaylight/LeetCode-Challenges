class Solution {
public:
    bool isPalindrome(string s) {
        string newString;
        bool condition = true;
        int j = 0;
        for (char c : s) {
            if (isalnum(c))
                newString.push_back(tolower(c));
        }
        string temp(newString.rbegin(), newString.rend());
        for (int i = 0; i < newString.length(); i++) {
            if (temp[i] != newString[i])
                return false;
        }
        return true;
    }
};
