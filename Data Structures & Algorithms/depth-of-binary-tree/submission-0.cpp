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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        stack<std::pair<TreeNode*, int>> stk;
        stk.push({root, 1});

        int maxD = 0;
        while(!stk.empty()){
            std::pair<TreeNode*, int> current = stk.top();
            stk.pop();
            TreeNode* node = current.first;
            int depth = current.second;
           
            if (node != nullptr){
                maxD =  max(maxD, depth);
                stk.push({node->right, depth + 1});
                stk.push({node->left, depth + 1});
            } 
        }
        return maxD;
    }
};
