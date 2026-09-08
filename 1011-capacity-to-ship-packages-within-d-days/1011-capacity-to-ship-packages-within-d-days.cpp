class Solution {
public:


bool capacity(vector<int>& weights, int days,int mid)
{    
   int ourday = 1;
   int load = 0;
   int capacity = mid;

   for(int i =0; i< weights.size();i++ )
   {
    if (load + weights[i] <= capacity)
    {
        load = load + weights[i];
    }
    else{
        load = weights[i];
        ourday++;
    }
    
   }

return ourday<= days;

}

int shipWithinDays(vector<int>& weights, int days) {

    int ans;
    int e =accumulate(weights.begin(), weights.end(), 0);
    int s= *max_element(weights.begin(), weights.end());

    while(s <= e)
    {   
        int mid = s + (e - s) / 2;

        if(capacity(weights, days, mid))
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