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
private:
bool res=true;
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        preorder(root->left,root->right);
        return res;
    }

    void preorder(TreeNode* left, TreeNode* right){
        if(!res) return;
        if(left==nullptr && right==nullptr){
            return;
        } else if(left==nullptr || right==nullptr){
            res=false;
            return;
        }
        if(left->val!=right->val){
            res=false;
            return;
        }
        preorder(left->left,right->right);
        preorder(left->right,right->left);
    }
};