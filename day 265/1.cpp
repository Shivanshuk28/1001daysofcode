// Leetcode:
// 2966. Divide Array Into Arrays With Max Difference

class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        if (n % 3 != 0)
        {
            return ans;
        }
        int i = 0;
        while (i < n)
        {
            if (i + 2 < n && nums[i + 2] - nums[i] <= k)
            {
                ans.push_back({nums[i], nums[i + 1], nums[i + 2]});
            }
            else
            {
                return vector<vector<int>>();
            }
            i += 3;
        }
        return ans;
    }
};