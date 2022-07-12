class Solution {
public:
    int romanToInt(string s) {
        map<char, int> key;
        map<char, int>::iterator itr;
        int total = 0;
        
        key.insert(pair<char, int>('I', 1));
        key.insert(pair<char, int>('V', 5));
        key.insert(pair<char, int>('X', 10));
        key.insert(pair<char, int>('L', 50));
        key.insert(pair<char, int>('C', 100));
        key.insert(pair<char, int>('D', 500));
        key.insert(pair<char, int>('M', 1000));

        
        //loop over the length of the string
        for (int i = 0; i < s.length(); i++) {
            for (itr = key.begin(); itr != key.end(); itr++) {
                if (s[i] == itr->first) {
                    total += itr->second;
                    break;
                }
            
            }
        }
        
        
        return total;
    }
};
