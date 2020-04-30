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
    int sum;
    int maxPathSumUtil(TreeNode* root)
    {
        if(root!=NULL)
        {
            int lSum=max(0,maxPathSumUtil(root->left));
            int rSum=max(0,maxPathSumUtil(root->right));
            sum=max(sum,root->val+lSum+rSum);
            return root->val+max(lSum,rSum);
        }
        return 0;
    }
    int maxPathSum(TreeNode* root) {
        sum=INT_MIN;
        maxPathSumUtil(root);
        return sum;
    }
};
