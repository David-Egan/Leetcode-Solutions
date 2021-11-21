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
    int rangeSumBST(TreeNode* root, int low, int high) {
        // if im higher than low explore left
        // if im lower than high explore right
        
        // if im both do the above and add me to sum...
        
        int currSum = 0;
        
        if(root == NULL){
            return 0;
        }
        
        if(root->val >= low && root->val <= high){
            currSum += root->val;
        }
        
        
        if(root->val >= low){
            currSum += rangeSumBST(root->left, low, high);
        }
        if(root->val <= high){
            currSum += rangeSumBST(root->right, low, high);
        }

        return currSum;
        
        
        // 10 + left + right
        // [left] 0 + r2
        // [r2] 7
        
        // 10 + 7 + right
        // [right] 15 
        
        
        // 10 + 7 + 15
        // = 32
    }
};