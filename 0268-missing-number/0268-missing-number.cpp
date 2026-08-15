class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int start = 0;
        int end = nums.size() - 1;
       
        int ans = nums.size();


        while (start <= end)
{ 
         int mid = (start + end)/2;
         
            if (nums[mid]==mid){
               start = mid+1;
               
            }

            else {
                ans = mid;
                end = mid -1;

            }
            
            

            












        }
        return ans;
    }
};