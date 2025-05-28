#include"same_tree.h"
#include<gtest/gtest.h>

TEST(SameTreeTest, ReturnTrueForIdenticalTrees) {
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    Solution sol;
    EXPECT_TRUE(sol.isSameTree(p, q));

    delete p->left; delete p->right; delete p;
    delete q->left; delete q->right; delete q;
}

TEST(SameTreeTest, ReturnFalseForDifferentRootValues) {
    TreeNode* p = new TreeNode(1);
    TreeNode* q = new TreeNode(2);

    Solution sol;
    EXPECT_FALSE(sol.isSameTree(p, q));

    delete p;
    delete q;
}

TEST(SameTreeTest, ReturnFalseForDifferentStructure ) {
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);

    TreeNode* q = new TreeNode(1);
    q->right = new TreeNode(2);

    Solution sol;
    EXPECT_FALSE(sol.isSameTree(p, q));

    delete p->left; delete p;
    delete q->right; delete q;
}

TEST(SameTreeTest, ReturnTrueForBothNullptr) {
    Solution sol;
    EXPECT_TRUE(sol.isSameTree(nullptr,nullptr));
}

TEST(SameTreeTest, ReturnFalseForOneNullptr) {
    TreeNode* p = new TreeNode(1);
    Solution sol;
    EXPECT_FALSE(sol.isSameTree(p, nullptr));
    delete p;
}
