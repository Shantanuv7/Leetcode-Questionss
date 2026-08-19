class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int suf = 1;
        int pref =1;
        int n = nums.size();

        int maxy = INT_MIN;


        for(int i =0; i < nums.size();i++)
        {
            if (suf == 0)
            {
                suf = 1;
            }
            if (pref == 0)
            {
                pref = 1;
            }

            pref = pref * nums[i];
            suf = suf* nums[n-i-1];

            maxy = max(maxy,max(pref,suf));


        }
        return maxy;
        
    }
};