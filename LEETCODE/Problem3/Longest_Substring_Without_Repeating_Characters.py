#time limit exceeding (bruteforce approach)

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        li=[]
        maxx=0
        for i in range(len(s)):
            for j in range(i,len(s)):
                x=s[i:j+1]
                l=len(set(x))
                ol=len(x)
                if l > maxx and ol==l :
                     maxx=l
        return maxx
