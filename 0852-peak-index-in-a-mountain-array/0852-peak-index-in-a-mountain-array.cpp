class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans;

        int s = 0;
        int e =arr.size();
         

        while (s<=e)
        {   int mid = (s+e)/2;
            if(arr[mid] < arr[mid+1])
            {
                s= mid+1;
            }

            else{

                ans = mid;
                e = mid -1 ;
            }
        }
        return ans;
    }
};