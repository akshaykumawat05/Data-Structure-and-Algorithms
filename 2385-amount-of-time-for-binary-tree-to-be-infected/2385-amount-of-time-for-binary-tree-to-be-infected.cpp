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
    TreeNode* markParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent, int start){
        if(!root) return NULL;
        queue<TreeNode*> q;
        q.push(root);
        parent[root] = NULL;
        TreeNode* res;

        while(!q.empty()){
            auto node = q.front();
            q.pop();
            if(node->val == start){
                res = node;
            }
            if(node->left){
                q.push(node->left);
                parent[node->left] = node;
            }
            if(node->right){
                q.push(node->right);
                parent[node->right] = node;
            }
        }
        
        return res;
    }
    int amountOfTime(TreeNode* root, int start) {
        if(!root) return 0;

        unordered_map<TreeNode*, TreeNode*> parent;
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        TreeNode* target = markParent(root, parent, start);
        int current_level = 0;
        q.push(target);
        visited[target] = true;

        while(!q.empty()){
            current_level++;
            int size = q.size();

            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left] = true;
                }
                if(node->right && !visited[node->right]){
                    q.push(node->right);
                    visited[node->right] = true;
                }
                if(parent[node] && !visited[parent[node]]){
                    q.push(parent[node]);
                    visited[parent[node]] = true;
                }
            }
        }
        return current_level-1;
    }
};