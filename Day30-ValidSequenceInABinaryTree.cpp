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
    bool isValidSequenceUtil(TreeNode* root, vector<int>& arr,int curr_index)
    {
        if(curr_index==arr.size()-1)
        {
            if(root!=NULL && root->val==arr[curr_index])
            {
                return root->left==root->right;
            }
            return false;
        }
        
        if(root==NULL)
            return false;
        
        if(root->val==arr[curr_index])
        {
            if(isValidSequenceUtil(root->left,arr,curr_index+1))
                return true;
            if(isValidSequenceUtil(root->right,arr,curr_index+1))
                return true;
        }
        return false;
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int curr_index=0;
        return isValidSequenceUtil(root,arr,curr_index);
    }
};
