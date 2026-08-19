class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {

        int m = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i][1] >= nums[i+1][0])
            {
                nums[i][1] = max(nums[i][1], nums[i+1][1]);

                nums.erase(nums.begin() + i + 1);

                i--;
            }
        }

        return nums;
    }
};