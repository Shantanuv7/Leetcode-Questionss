class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size()-1;
        
        
        vector <int> v (arr);
        int m = v.size()-1;

        sort(v.begin(),v.end());

        for (int i =0; i < n; i++)
        {
            if (v[m] == arr[i])
            {
                return i;
            }
        }
        return{};
    }
};