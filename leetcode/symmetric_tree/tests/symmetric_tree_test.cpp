#include"symmetric_tree.h"
#include<gtest/gtest.h>

TEST(SymmetricTreeTest, ReturnTrueForSymmetricTree) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    root->right = new TreeNode(2, new TreeNode(4), new TreeNode(3));

    Solution sol;
    EXPECT_TRUE(sol.isSymmetric(root));

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
    
}

TEST(SymmetricTreeTest, ReturnFalseForAsymmetricTree) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    root->right = new TreeNode(2, new TreeNode(3), new TreeNode(4));

    Solution sol;
    EXPECT_FALSE(sol.isSymmetric(root));

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(SymmetricTreeTest, ReturnFalseForAsymmetricTreeWithNullptr) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, nullptr, new TreeNode(3));
    root->right = new TreeNode(2, nullptr, new TreeNode(3));

    Solution sol;
    EXPECT_FALSE(sol.isSymmetric(root));

    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(SymmetricTreeTest, ReturnTrueForEmptyTree) {

    Solution sol;
    EXPECT_TRUE(sol.isSymmetric(nullptr));
}

TEST(SymmetricTreeTest, ReturnTrueForSingleNodeTree) {
TreeNode* root = new TreeNode(1);
Solution sol;
EXPECT_TRUE(sol.isSymmetric(root));

delete root;
}

TEST(SymmetricTreeTest, ReturnFalseForDifferentDepth) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(3), nullptr);
    root->right = new TreeNode(2);

    Solution sol;
    EXPECT_FALSE(sol.isSymmetric(root));

    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;
}

TEST(SymmetricTreeTest_Mirror, ReturnTrueForMirroredTrees) {
    TreeNode* m1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* m2 = new TreeNode(1, new TreeNode(3), new TreeNode(2));

    Solution sol;
    EXPECT_TRUE(sol.isMirror(m1, m2));

    delete m1->left;
    delete m1->right;
    delete m1;
    delete m2->left;
    delete m2->right;
    delete m2;
}

TEST(SymmetricTreeTest_Mirror, ReturnFalseForIdenticalTrees) {
    TreeNode* m1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* m2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));

    Solution sol;
    EXPECT_FALSE(sol.isMirror(m1, m2));

    delete m1->left;
    delete m1->right;
    delete m1;
    delete m2->left;
    delete m2->right;
    delete m2;
}

TEST(SymmetricTreeTest_Mirror, ReturnTrueForBothNullptr) {
    Solution sol;
    EXPECT_TRUE(sol.isMirror(nullptr, nullptr));
}

TEST(SymmetricTreeTest_Mirror, ReturnFalseForOneNullptr) {
    TreeNode* m1 = new TreeNode(1);
    Solution sol;
    EXPECT_FALSE(sol.isMirror(m1, nullptr));
    delete m1;
}
