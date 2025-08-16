/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> currentlevel;
        ;

        if (root == NULL)
            return ans;

        q.push(root);
        q.push(NULL);
        while (q.size() > 0) {
            TreeNode* temp = q.front();
            q.pop();

            if (temp == NULL) {
                ans.push_back(currentlevel);
                currentlevel.clear();

                if (!q.empty()) {
                    q.push(NULL);
                }
            } else {

                currentlevel.push_back(temp->val);
                if (temp->left != NULL) {
                    q.push(temp->left);
                }
                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }
        }
        return ans;
    }
};