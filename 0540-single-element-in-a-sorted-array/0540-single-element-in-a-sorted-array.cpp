class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        // if (nums.size() == 1)
        //     return nums[0];

        int s = 0;
        int e = nums.size() - 1;

        while (s <= e)
        {
            int mid = (s + e) / 2;

            int currentvalue = nums[mid];

            int leftvalue = -1;
            if(mid -1 >= 0)
            {
                leftvalue = nums[mid-1];
            }

            int rightvalue = -1;
            if(mid +1 < nums.size() )
            {
                rightvalue = nums[mid+1];
            }

            if (currentvalue != leftvalue && currentvalue != rightvalue)
            {
                return nums[mid];
            }

            if (currentvalue== leftvalue && currentvalue != rightvalue)
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

            if (currentvalue != leftvalue && currentvalue == rightvalue)
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

    return {};
    }
};