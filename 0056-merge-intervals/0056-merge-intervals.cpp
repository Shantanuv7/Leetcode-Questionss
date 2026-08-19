class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if (ans.empty())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int last = ans.size() - 1;

                if (ans[last][1] >= nums[i][0])
                {
                    ans[last][1] = max(ans[last][1], nums[i][1]);
                }
                else
                {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};