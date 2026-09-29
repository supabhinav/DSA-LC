class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cp = 0;
        int cn = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
                cp++;
            }
            if(nums[i]<0){
                cn++;
            }
        
        }
        return max(cp,cn);
    }
};