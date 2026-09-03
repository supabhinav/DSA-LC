class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = *min_element(nums1.begin(), nums1.end());

        // Case 1: All numbers are even
        bool allEven = true;

        for (int x : nums1) {
            if (x % 2 != 0) {
                allEven = false;
                break;
            }
        }

        // Case 2: Minimum number is odd
        return allEven || (mn % 2 != 0);
    }
};