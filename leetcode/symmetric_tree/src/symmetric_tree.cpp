#include "symmetric_tree.h"


    bool Solution::isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return isMirror(root->left, root->right);
    }

    bool Solution::isMirror(TreeNode* m1, TreeNode* m2) {
        if (m1 == nullptr && m2 == nullptr) return true;
        if (m1 == nullptr || m2 == nullptr || m1->val != m2->val) return false;

        return isMirror(m1->left, m2->right) && isMirror(m1->right, m2->left);
    }