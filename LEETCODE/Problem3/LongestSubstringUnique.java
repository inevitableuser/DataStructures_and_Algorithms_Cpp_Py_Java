// Runtime: 5 ms, faster than 81.29% of Java online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 39.3 MB, less than 49.13% of Java online submissions for Longest Substring Without Repeating Characters.

import java.util.*;


class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        Map<Character,Integer> map=new HashMap<>();
        int start=0,max=0,p;

        char[] arr=s.toCharArray();

        for(int i=0;i<arr.length;i++)
        {
           if(map.containsKey(arr[i]))
           {
               p=map.get(arr[i])+1;
               if(p > start)
                    start=p;
           }
           p=i-start+1;
           if(p > max)
               max=p;
            map.put(arr[i],i);
        }
        return max;
    }
}

class LongestSubstringUnique
{
    public static void main(String[] args) {
        String st="abcabcbb";
        Solution sol=new Solution();
        System.out.println(sol.lengthOfLongestSubstring(st));

    }
}