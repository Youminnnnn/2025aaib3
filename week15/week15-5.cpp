// week15-5.cpp 學習計畫(隱藏) Binary Tree 第1題
// 104. Maximum Depth of Binary Tree
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
    // Binary Tree 最喜歡用「函式呼叫函式」來解
    // 英文 Recursion(遞迴) 或  Recursive Function Call
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int left = maxDepth(root->left); //函式呼叫函式
        int right = maxDepth(root->right); //函式呼叫函式
        return max(left, right)+1; // 再加1層樓
    }
};
