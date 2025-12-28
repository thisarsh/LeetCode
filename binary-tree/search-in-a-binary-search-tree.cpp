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
    TreeNode *f(TreeNode *r1,int val){
        if(!r1 || r1->val==val) return r1;
        return f( r1->left,val);
        return f( r1->right,val);
        return  r1;
        
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return f(root,val);
        
    }
};