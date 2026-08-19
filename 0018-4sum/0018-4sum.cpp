class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

      

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int x = 0;
        int y = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++)

        { 
            if (i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }

            for(int j = i+1 ; j <nums.size(); j++)
            {
            x = j + 1;
           
            y = nums.size() - 1;

            if (j > i + 1 && nums[j] == nums[j-1])
            {
                continue;
            }

            while (x < y)
            {
               long long int sum = 1LL * nums[i] + nums[x] + nums[y] + nums[j];

                if (sum == target)
                {
                    ans.push_back({nums[i], nums[x], nums[y] , nums[j]});

                    x++;
                    y--;

                    while (x < y && nums[x] == nums[x-1])
                    {
                        x++;
                    }

                    while (x < y && nums[y] == nums[y+1])
                    {
                        y--;
                    }
                }

                else if (sum < target)
                {
                    x++;
                }

                else
                {
                    y--;
                }
            }
        }
        }

        return ans;
    }
};
        
    