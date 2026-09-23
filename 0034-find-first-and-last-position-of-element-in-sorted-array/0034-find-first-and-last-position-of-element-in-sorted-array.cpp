class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
       int low=0;
       int start=-1;
       int high=nums.size()-1;
       while(low<=high)
       {
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            high=mid-1;
            start=mid;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
       }

        low=0;
       int end=-1;
       high=nums.size()-1;
       while(low<=high)
       {
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            low=mid+1;
            end=mid;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
       }



       if(start==-1)return {-1,-1};
       return {start,end};
    }
};