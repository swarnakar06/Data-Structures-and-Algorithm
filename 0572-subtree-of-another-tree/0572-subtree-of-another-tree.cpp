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
    bool isidentical(TreeNode* root,TreeNode* subRoot){
        if(root==NULL || subRoot==NULL)
        {
            return root==subRoot;
        }
        bool leftcheck=isidentical(root->left,subRoot->left);
        bool rightcheck=isidentical(root->right,subRoot->right);
        return leftcheck && rightcheck && root->val==subRoot->val;
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL)
        {
            return root==subRoot;
        }
        if(root->val==subRoot->val && isidentical(root,subRoot))
        {
            return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        
    }
};