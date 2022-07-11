class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //Merge the array
        vector<int> nums3;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(nums3));
        if (nums3.size() % 2 != 0) {
            int index = (nums3.size()) / 2;
            return nums3[index];
        }
        else if (nums3.size() % 2 == 0) {
            int firstMedian = nums3[nums3.size() / 2], lastMedian = nums3[(nums3.size() / 2) - 1];
            double result = firstMedian + lastMedian;
            return result / 2;
        }
        else {
            cout << "There was an unknown error" << endl;
            return 0;
        }
