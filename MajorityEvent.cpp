class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int m = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (count == 0)
                m = nums[i];
            
            if (nums[i] == m) 
                count++;
            else
                count--;
        }
        return m;
    }
    
};
