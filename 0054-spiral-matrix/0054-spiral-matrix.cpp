class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        vector<int>ans; 
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        while(srow<=erow && scol<=ecol)
        {
            //top
            for(int i= scol ;i<=ecol;i++)
            {
                ans.push_back(matrix[srow][i]);
            }

            //right
             for(int i= srow+1 ;i<=erow;i++)
            {
                ans.push_back(matrix[i][ecol]);
            }
            //bottom
             for(int i= ecol-1 ;i>=scol;i--)
            {
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }
            //left
             for(int i= erow-1 ;i>=srow+1;i--)
            {
                if(scol==ecol)
                {
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return ans;

        
    }
};