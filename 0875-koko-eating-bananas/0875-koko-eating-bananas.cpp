class Solution {
public:

    bool canFinish(vector<int>& piles, int mid, int h)
    {
        long long hours = 0;

        for(int i : piles)
        {
           hours = hours + (i/mid); 
           if(i%mid != 0)
            { hours++; } 
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if(canFinish(piles, mid, h))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        return ans;
    }
};