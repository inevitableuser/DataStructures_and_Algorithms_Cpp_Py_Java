# Runtime: 48 ms, faster than 99.13% of Python3 online submissions for Two Sum.
# Memory Usage: 15.4 MB, less than 20.75% of Python3 online submissions for Two Sum.

class Solution:
    def twoSum(self, nums, target):
        visited={}
        for i in range(len(nums)):
            remain=target-nums[i]
            if remain in visited.keys():
                return [visited[remain],i]
            visited[nums[i]]=i
            


sol=Solution()
print(sol.twoSum([3,2,4],6))




# runs with 30% better tc and  80 % better sc


# class Solution:
#     def twoSum(self, nums, target):
#         ans=[]
#         count=0
#         for i,x in enumerate(nums):
#             if target - x in nums[:i]+nums[i+1:]:
#                 target =target-x
#                 ans.append(i)
#                 p=i+1
#                 ans.append(nums[p:].index(target)+p)
#                 break
#         return ans
                
            


# sol=Solution()
# print(sol.twoSum([2,5,5,11],10))








# [-3,4,3,90]
# 0


# [0,1]
