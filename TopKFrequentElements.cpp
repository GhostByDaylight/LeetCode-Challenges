#include <map>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> returnVec;
        vector<pair<int, int>> res;
        map<int, int> freq;
        for (int i : nums) {
            if (freq.find(i) == freq.end()) {
                freq.insert({i, 1});
            }
            else {
                freq[i]++;
            }
        }
        for(const auto &it : freq) {
            res.push_back(it);
        }
        std::sort(res.begin(), res.end(), 
              [](const pair<int, int> &a, const pair<int, int> &b) {
                  return a.second > b.second;  // sort by frequency
              });
        for (int i = 0; i < k; i++) 
            returnVec.push_back(res[i].first);
        return returnVec; 
    }
};
