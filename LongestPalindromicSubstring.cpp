//Not yet finished
class Solution {
public:
    string longestPalindrome(string s) {
        //Variables
        string maxSubstring = "";
        string current;
        int i = 0;
        
        //Loop over the length of the string
        while (i != s.length() - 1) {
            current += s[i];
            string rString = string(current.rbegin(), current.rend());
            cout << "current string: " << current << endl;
            cout << "reversed string: " << rString << endl;
            cout << "current index: " << i << endl;
            if (current == rString) {
                if (current.length() > maxSubstring.length())
                    maxSubstring = current;
            }
            
            
            
            i++;
        }
        
        
        
        
        return maxSubstring;
    }
};
