class Solution {
public:
    void sortColors(vector<int>& nums) {

        int z =0;
        int o=0;
        int t =0;

        for(int i=0; i< nums.size(); i++)
        {
           if (nums[i] == 0)
           { z++;}

           if (nums[i] == 1)
           { o++;}

           if (nums[i] == 2)
           { t++;}

        }

          nums.clear();

        nums.insert(nums.begin(),z,0);
        nums.insert(nums.begin()+z,o,1);
        nums.insert(nums.begin()+z+o,t,2);
        
    }
};