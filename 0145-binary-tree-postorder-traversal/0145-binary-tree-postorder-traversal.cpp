/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        if(root==NULL)
        {
            return result;;
        }
        //left
        vector<int>leftnode=postorderTraversal(root->left);
        result.insert(result.end(),leftnode.begin(),leftnode.end());

        //right
        vector<int>rightnode=postorderTraversal(root->right);
        result.insert(result.end(),rightnode.begin(),rightnode.end());

        result.push_back(root->val);

        return result;
        
    }
};