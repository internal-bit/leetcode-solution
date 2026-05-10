
class Solution {
public:
    bool CekSymmetric(TreeNode* l, TreeNode* r){
        if(l==nullptr&&r==nullptr)return true;
        if(l==nullptr||r==nullptr)return false;
        if(l->val!=r->val)return false;
        return CekSymmetric(l->left,r->right)&&CekSymmetric(l->right,r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;

        return CekSymmetric(root->left,root->right);
    }
};