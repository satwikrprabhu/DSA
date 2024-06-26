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
    bool isBalanced(TreeNode* root) {
        return depth(root)!=-1;
    }

    int depth(TreeNode* root) {
        if(root==NULL) return 0;
        int leftDepth = depth(root->left);
        if(leftDepth==-1) return -1;
        int rightDepth = depth(root->right);
        if(rightDepth==-1) return -1;
        if(abs(leftDepth-rightDepth)>1) return -1;
        return 1 + max(leftDepth, rightDepth);
    }
};