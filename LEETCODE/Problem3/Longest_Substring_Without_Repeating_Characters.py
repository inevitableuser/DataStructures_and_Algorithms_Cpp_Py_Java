#Runtime: 54 ms, faster than 84.23% of Python3 online submissions for Longest Substring Without Repeating Characters.
#Memory Usage: 14.3 MB, less than 80.36% of Python3 online submissions for Longest Substring Without Repeating Characters.

class Solution:
    def lengthOfLongestSubstring(self, s):             # O(n) TC
        mem={}
        start=0
        maxx=0
        for i in range(len(s)):
            if s[i] in mem:
                x=mem[s[i]]+1
                if start<x:
                    start=x
            y=i-start+1
            if y > maxx:
                maxx=y
            mem[s[i]]=i
        return maxx
            
class Main:
    def main(self):
       x=input()
       ans=Solution().lengthOfLongestSubstring(x)
       print(ans)
if __name__=="__main__":
    Main().main()




    
# this function also works buts takes more time 
#def lengthOfLongestSubstring(self, s):
#        max_string=''
#        maxcount=0
#        p=0
#        while p!=len(s):
#            i=s[p]
#            if i in max_string:
#                l=len(max_string)
#                if l > maxcount:
#                    maxcount=l
#                max_string=''
#                p=s.index(i)+1
#                s=s[p:]
#                p=0
#            else:
#                max_string+=i
#                p+=1
#        l=len(max_string)
#        if l > maxcount:
#            maxcount=l
#        return maxcount

