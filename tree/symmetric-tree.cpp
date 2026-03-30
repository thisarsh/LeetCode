bool f(TreeNode *r1, TreeNode *r2){
    if(!r1 && !r2 ) return 1;
    if(!r1 || !r2) return 0;
    if(r1->val !=r2->val) return 0;
    if(r1->val !=r2->val) return 0;
    return f(r1->left ,r2->right) && f(r1->right ,r2->left);
 }
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return 0;
        TreeNode *r1=root,*r2=root;
        return f(r1,r2);
    }
};