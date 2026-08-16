class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        if (nums.size() == 1)
            return nums[0];

        int s = 1;
        int e = nums.size() - 2;

        while (s <= e)
        {
            int mid = (s + e) / 2;

            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }

            if (nums[mid] == nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                if ((mid - 1) % 2 == 1)
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }

            if (nums[mid] != nums[mid - 1] && nums[mid] == nums[mid + 1])
            {
                if ((mid + 1) % 2 == 1)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
        }

        if (nums[0] != nums[1])
            return nums[0];

        return nums[nums.size() - 1];
    }
};