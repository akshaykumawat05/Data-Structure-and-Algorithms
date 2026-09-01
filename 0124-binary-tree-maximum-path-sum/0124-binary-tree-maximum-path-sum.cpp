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
    int func(TreeNode* node, int &maxi){
        if(!node) return 0;

        int leftsum = max(0, func(node->left, maxi));
        int rightsum = max(0, func(node->right, maxi));

        maxi = max(maxi, leftsum + rightsum + node->val);

        return max(leftsum, rightsum) + node->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi = -1100;
        func(root, maxi);
        return maxi;
    }
};