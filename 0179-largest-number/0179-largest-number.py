class Solution:

    def largestNumber(self, nums: list[int]) -> str: 
        nums =[str(x) for x in nums]
        nums.sort(key=lambda x: x*10,reverse=True)
        nums="".join(nums)
        if nums[0]=="0":
            return "0"
        return nums    