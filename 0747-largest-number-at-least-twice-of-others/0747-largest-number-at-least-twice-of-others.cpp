class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();
        
        int largest = nums[maxIndex];
        
        for (int i = 0; i < nums.size(); i++) {
            if (i != maxIndex && largest < 2 * nums[i]) {
                return -1;
            }
        }
        
        return maxIndex;
    }
};