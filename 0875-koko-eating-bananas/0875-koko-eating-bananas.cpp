class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s =1;
        int n =piles.size()-1;
        int e = *max_element(piles.begin(), piles.end());
        int ans;

        while (s<=e)
        { 
            long long hours =0;

           int mid = s + (e-s)/2;

            for(int i : piles)
            { 
                hours = hours + (i/mid);
                if(i%mid != 0)
                {
                    hours++;
                }

            }

            if (hours <= h)
            {
                ans = mid;
                e = mid-1;
            }

            else
            {
              s= mid+1;
            }






        }
        return ans;
    }
};