class Solution {
public:

    bool searchrow(vector<vector<int>>&matrix,int target,int midr)
    {
        int n =matrix[0].size();
        int start = 0;
        int end = n-1;

        while(start<=end)
        {
            int mid = start + (end-start)/2;

            if(target ==matrix[midr][mid])
            {
                return true;

            }
            else if (target>matrix[midr][mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m =matrix.size();
        int n = matrix[0].size();
        int startrow=0,endrow=m-1;
        while(startrow<=endrow)
        {
            int midr=startrow + (endrow - startrow)/2;
            if(target>=matrix[midr][0] && target<= matrix[midr][n-1])
            {
                return searchrow(matrix,target,midr);
            }
            else if(target>matrix[midr][n-1])
            {
                startrow=midr +1;

            }
            else
            {
                endrow = midr -1;
            }
        }
        return false;
    }
};