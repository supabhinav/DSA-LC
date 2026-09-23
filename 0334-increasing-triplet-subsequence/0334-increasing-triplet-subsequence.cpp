class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f = INT_MAX;
        int s = INT_MAX;
        int t = INT_MAX;
        for(int i =0;i<nums.size();i++){
            int element = nums[i];
            if(f >= element){
                f = element;
            }else if(s >= element){
                s = element;
            }else 
            {
                t = element;
                return true;
            }
        }


return false;

  }
};