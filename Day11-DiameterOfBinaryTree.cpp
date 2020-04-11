/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int diameter;
    int dfs(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int left=dfs(root->left);
        int right=dfs(root->right);
        diameter=max(diameter,left+right+1);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diameter=1;
        dfs(root);
        return diameter-1;
    }
};
