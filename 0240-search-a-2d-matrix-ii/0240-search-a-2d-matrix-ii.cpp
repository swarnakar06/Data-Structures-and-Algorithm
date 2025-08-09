class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int r =0,c=m-1;
        while(c>=0 && r<n)
        {
            if(target == matrix[r][c])
            {
                return true;
            }
            else if(target>matrix[r][c])
            {
                r++;
            }
            else
            {
                c--;
            }
        }
        return false;
    }
};