#include "symmetric_tree.h"
#include<iostream>


int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    root->right = new TreeNode(2, new TreeNode(4), new TreeNode(3));

    Solution solution;

    bool isSymmetricResult = solution.isSymmetric(root);

    if (isSymmetricResult) {
        std::cout << "Tree is symmetric. " << std::endl;
    } else {
        std::cout << "Tree is not symmetric " << std::endl;
    }
    

    TreeNode* m1 = new TreeNode(1);
    m1->left = new TreeNode(2);
    m1->right = new TreeNode(3);

    TreeNode* m2 = new TreeNode(1);
    m2->left = new TreeNode(2);
    m2->right = new TreeNode(3);

    bool isMirrorResult = solution.isMirror(m1, m2);

    if (isMirrorResult) {
        std::cout << "Tree is symmetric. " << std::endl;
    } else {
        std::cout << "Tree is not symmetric. " << std::endl;
    }

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root;

    delete m1->left;
    delete m1->right;
    delete m1;
    delete m2->left;
    delete m2->right;
    delete m2;

    return 0;
}

