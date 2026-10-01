class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        a=""
        if not strs:
            return a
        for i in range (len(strs[0])):
            for j in range (len(strs)-1):
                if  i>=len(strs[j]) or i>=len(strs[j+1]) or strs[j][i]!=strs[j+1][i]:
                    return a
            a=a+strs[0][i]
        return a    



        