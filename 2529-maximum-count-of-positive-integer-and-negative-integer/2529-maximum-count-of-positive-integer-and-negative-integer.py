class Solution:
    def maximumCount(self, nums: list[int]) -> int:
        a=0
        b=0
        for i in range (len(nums)):
            if nums[i]>0:
                a=a+1
            if nums[i]<0:
                b=b+1   
        if a>b:
            return a         
        else:
            return b
        return 0            
        