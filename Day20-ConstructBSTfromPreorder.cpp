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
    TreeNode* newNode(int key)
    {
        TreeNode* node = new TreeNode;
        node->val = key;
        node->left = node->right = NULL;

        return node;
    }
    TreeNode* bstFromPreorderUtil(vector<int> &preorder,int &preIndex, int low, int high, int size)  
    {    
        if (preIndex >= size || low > high)  
            return NULL;  
            
        TreeNode* root = newNode( preorder[preIndex] );
        preIndex++;  

        if (low == high)  
            return root;  
 
        int i;  
        for ( i = low; i <= high; ++i )  
            if ( preorder[ i ] > root->val )  
                break;  
                
        root->left = bstFromPreorderUtil(preorder, preIndex, preIndex,i-1, size);  
        root->right = bstFromPreorderUtil(preorder, preIndex, i, high, size);  

        return root;  
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        int preIndex=0;
        return bstFromPreorderUtil(preorder,preIndex,0,n-1,n);
    }
};
