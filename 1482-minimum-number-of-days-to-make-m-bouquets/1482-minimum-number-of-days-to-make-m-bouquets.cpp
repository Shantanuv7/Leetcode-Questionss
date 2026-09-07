class Solution {
public:

    bool canmake(vector<int>& bloomDay, int m, int k, int mid)
    {     
        int z = 0;
        int c =0;

        for (int i : bloomDay)
        {
            if (i <= mid)
            {  
                c++;

                if (c>=k)
                   {z++;
                   c=0;
                   }
            }

            else{

                c = 0;


            }





        }

        return z >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans = -1;
        
        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        
        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (canmake(bloomDay, m, k, mid))
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