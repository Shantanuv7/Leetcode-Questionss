class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int bestbuy = nums[0];
        int maxy = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            maxy = max(maxy, nums[i] - bestbuy);
            bestbuy = min(bestbuy, nums[i]);
        }

        return maxy;
    }
};