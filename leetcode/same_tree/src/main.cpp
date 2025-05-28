#include "same_tree.h"
#include<iostream>


int main() {
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    Solution solution;
    bool result = solution.isSameTree(p, q);

    if (result) {
        std::cout << "Threes are the same. " << std::endl;
    } else {
        std::cout << "Threes are different. " << std::endl;
    }

    delete p->left;
    delete p->right;
    delete p;
    delete q->right;
    delete q->left;
    delete q;

    return 0;
}

