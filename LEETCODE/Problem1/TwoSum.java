// Runtime: 1 ms, faster than 99.58% of Java online submissions for Two Sum.
// Memory Usage: 39.3 MB, less than 52.58% of Java online submissions for Two Sum.


import java.util.*;


class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        Map<Integer,Integer> map=new HashMap<>();
        int rem;

        for(int i=0;i<nums.length;i++)
        {
            rem=target-nums[i];
            if(map.containsKey(rem))
            {
                return new int[] {map.get(rem),i};
            }

            map.put(nums[i],i);
        }

        return new int[] {};
        
    }
}

public class TwoSum {
    public static void main(String[] args) {
         
        int[] arr={3,3};
        int target=6;

        Solution sol=new Solution();
        int[] ans=new int[2];
        ans=sol.twoSum(arr, target);
        for(int i=0;i<ans.length;i++)
        {
            System.out.println(ans[i]);
        }

    }
}
