class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        int left = 0;
        int right = n - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            int maxRow = 0;

            for (int i = 1; i < m; i++)
            {
                if (mat[i][mid] > mat[maxRow][mid])
                    maxRow = i;
            }

            int leftValue = (mid == 0) ? -1 : mat[maxRow][mid - 1];
            int rightValue = (mid == n - 1) ? -1 : mat[maxRow][mid + 1];

            if (mat[maxRow][mid] > leftValue &&
                mat[maxRow][mid] > rightValue)
            {
                return {maxRow, mid};
            }

            if (leftValue > mat[maxRow][mid])
                right = mid - 1;
            else
                left = mid + 1;
        }

        return {-1, -1};
    }
};