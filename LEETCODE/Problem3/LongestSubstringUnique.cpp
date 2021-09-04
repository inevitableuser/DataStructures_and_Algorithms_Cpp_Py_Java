// Runtime: 8 ms, faster than 84.95% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 8.2 MB, less than 72.16% of C++ online submissions for Longest Substring Without Repeating Characters.

# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int> mp;
        int max=0,start=0,p;
        for(int i=0;i<s.length();i++)
        {
             if(mp.count(s[i]))
             {
                 p=mp.at(s[i])+1;
                 if(p>start)
                 {
                     start=p;
                 }
             }
             p=i-start+1;
             if(p>max)
             {
                 max=p;
             }

             mp[s[i]]=i;
        }
        return max;
    }
};

int main()
{
    string st="abcabcbb";

    Solution sol=Solution();
    cout<<sol.lengthOfLongestSubstring(st)<<endl;
    return 0;
}