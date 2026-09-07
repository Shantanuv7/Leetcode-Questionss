class Solution {
public:
    
    bool sum(vector<int>& nums, int threshold,int mid)
    {
        int s =0;
         for (int i: nums)
         {
            s = s+ (i/mid);
            if(i % mid != 0)
            { s++; } 
         }
          
          return s <= threshold;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans;
        int s = 1;
        int e = *max_element(nums.begin(), nums.end());

        while(s <=e)
        
        {   int mid = s + (e - s) / 2;

            if(sum( nums, threshold, mid))
            {
                ans =mid;
                e =mid-1;
            }
            else 
            {
                s = mid+1;
            }
        }
        return ans;
    }
};