class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int currentLongest = 0;
        for (int i = 0; i < s.length(); i++) {
            
            string temp = "";
            int j = i;
            while (j < s.length() && temp.find(s[j]) == -1) {
                temp += s[j];
                j++;
            }
            if (temp.length() > currentLongest) 
                currentLongest = temp.length();  
        }
        return currentLongest;
    }
};
