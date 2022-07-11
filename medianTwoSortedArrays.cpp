class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //Merge the array -> nums3
        vector<int> nums3;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(nums3));
      
        // Test if there is an even or odd amount of elements in the array
      
        //Array has odd amount of elements
        if (nums3.size() % 2 != 0) {
            //Find middle element -> index
            int index = (nums3.size()) / 2;
            return nums3[index];
        }
        //Array has even amount of elements
        else if (nums3.size() % 2 == 0) {
            //Find middle 2 elements, calculate the middle of them -> result
            double result = (nums3[nums3.size() / 2] + nums3[(nums3.size() / 2) - 1]);
            return result / 2;
        }
        else {
            cout << "There was an unknown error" << endl;
            return 0;
        }
