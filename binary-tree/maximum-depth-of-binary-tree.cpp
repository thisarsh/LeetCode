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
    int depth(TreeNode *root,int count){
        if(!root)return count;
        // if(!root->left && !root->right)return count;
        if(root->left){
            count++;
            depth(root->left,count);
        }
        if(root->right){
            count++;
            depth(root->left,count);
        }

        return count+1;


        

    }
public:
    int maxDepth(TreeNode* root) {
        return depth(root,0);
        
    }
};