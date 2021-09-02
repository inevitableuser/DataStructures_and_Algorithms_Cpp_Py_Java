
class Solution:
    def lengthOfLongestSubstring(self, s):
        max_string=''
        maxcount=0
        p=0
        while p!=len(s):
            i=s[p]
            if i in max_string:
                l=len(max_string)
                if l > maxcount:
                    maxcount=l
                max_string=''
                p=s.index(i)+1
                s=s[p:]
                p=0
            else:
                max_string+=i
                p+=1
        l=len(max_string)
        if l > maxcount:
            maxcount=l
        return maxcount
                
            
class Main:
    def main(self):
       print(Solution().lengthOfLongestSubstring(input()))
if __name__=="__main__":
    Main().main()
