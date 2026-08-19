class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            int a = nums[i] * maxProd;
            int b = nums[i] * minProd;

            maxProd = max(nums[i], max(a, b));
            minProd = min(nums[i], min(a, b));

            ans = max(ans, maxProd);
        }

        return ans;
    }
};