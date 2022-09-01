// https://leetcode.com/problems/count-good-nodes-in-binary-tree/discuss/2511440/C%2B%2B-or-Pre-Order-Traversal-or-Intuitive-Approach
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

// Preorder traversal
class Solution {
public:
    int count = 0;
    // rec case
    void preorder(TreeNode* root, int max)
    {
        if(root == NULL) 
            return;
        if(root->val >= max)
        {
            count++;
            max = root->val;
        }
        preorder(root->left,max);
        preorder(root->right,max);
    }
    int goodNodes(TreeNode* root) {
        preorder(root, INT_MIN);
        return count;
    }
};