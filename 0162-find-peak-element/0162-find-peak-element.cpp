class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        

        int s =0;
        int e = nums.size()-1;
        int ans;


        while (s<=e)
        {
            int mid = s+ (e-s)/2;

            if(mid < nums.size()-1 && nums[mid] < nums[mid+1])
            {
                s= mid+1;
            }

            else{
               ans= mid;
                e =mid-1;
            }

        }
        return ans;
    }
};