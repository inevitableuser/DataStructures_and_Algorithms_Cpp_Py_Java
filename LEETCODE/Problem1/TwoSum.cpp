#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mp;
        int rem;

        for(int i=0;i<nums.size();i++)
        {
            rem=target-nums.at(i)
            if(mp.count(rem))
            {
                mp.
            }
            
        }

        return nums;
    }
};


int main()
{
    vector<int> vect={2,7,11,15};
    int target=9;
    Solution solution=Solution();
    solution.twoSum(vect,target);
}