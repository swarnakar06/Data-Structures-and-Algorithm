class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* prev = nullptr;
        helper(root, prev);
    }

private:
    void helper(TreeNode* node, TreeNode*& prev) {
        if (!node) return;

        // reverse preorder: right -> left -> root
        helper(node->right, prev);
        helper(node->left, prev);

        // re-link pointers
        node->right = prev;
        node->left  = nullptr;
        prev = node;
    }
};
