class Solution {
public:
    bool isLeaf(TreeNode* node) {
        return !node->left && !node->right;
    }

    void func(TreeNode* node, string s, vector<string>& paths) {
        if (isLeaf(node)) {
            paths.push_back(s);
            return;
        }

        if (node->left) {
            string temp = s + "->" + to_string(node->left->val);
            func(node->left, temp, paths);
        }

        if (node->right) {
            string temp = s + "->" + to_string(node->right->val);
            func(node->right, temp, paths);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;

        if (!root)
            return paths;

        string s = to_string(root->val);
        func(root, s, paths);

        return paths;
    }
};