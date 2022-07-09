class Solution {
public:
    bool isPalindrome(int x) {
        string strX = to_string(x);
        string temp;
        int j = 0;
        bool condition = true;
        for (int i = strX.length() - 1; i >= 0; i--) {
            temp[j] = strX[i];
            j++;
            
        }
        for (int i = 0; i < strX.length(); i++) {
            if (strX[i] != temp[i]) {
                condition = false; 
                break;
            }
        }
        return condition;
    }
};
