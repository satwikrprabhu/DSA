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
vector<int> vec;
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        flatten(root1);
        flatten(root2);
        sort(vec.begin(),vec.end());
        return vec;
    }
    void flatten(TreeNode* root){
        if(root==nullptr) return;
        flatten(root->left);
        vec.push_back(root->val);
        flatten(root->right);
    }
};