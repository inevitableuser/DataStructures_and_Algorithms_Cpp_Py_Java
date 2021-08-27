// Runtime: 8 ms, faster than 94.73% of C++ online submissions for Two Sum.
// Memory Usage: 11.2 MB, less than 22.27% of C++ online submissions for Two Sum.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mp;
        int rem;

        for(int i=0;i<nums.size();i++)
        {
            rem=target-nums.at(i);
            if(mp.count(rem))
            {
                return {mp.at(rem),i};
            }
            mp[nums.at(i)]=i;
        }

        return {};
    }
};


int main()
{
    vector<int> vect={3,3};
    int target=6;
    Solution solution=Solution();
    vector<int> ans=solution.twoSum(vect,target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans.at(i)<<endl;
    }
}