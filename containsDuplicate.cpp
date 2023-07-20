#include <set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numsSet;
        for (int i : nums)
            numsSet.insert(i);
        
        vector<int> setToVec(numsSet.begin(), numsSet.end());
        std::vector<int> sortedVector(nums);
        std::sort(sortedVector.begin(), sortedVector.end());

        return setToVec == sortedVector ? false : true;
    }
};
