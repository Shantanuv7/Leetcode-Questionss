class Solution {
public:

    bool check(vector<int>& nums, int k, int mid)
    {
        int sum = 0;
        int part = 1;
        
        for(int i : nums)
        {    
            sum = sum+i;
            if(sum > mid)
            {   
                
                sum = i;
                part++;
            }

            
        }
        return part <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int ans;
        int s = *max_element(nums.begin(), nums.end());
        int e = accumulate(nums.begin(), nums.end(), 0);

        while(s<=e)
        {
            int mid = s + (e-s)/2;
          
            if(check(nums, k, mid))
            {
                e = mid-1;
                ans = mid;
            }
            else
            {
                s = mid+1;
            }
        }

        return ans;
    }
};