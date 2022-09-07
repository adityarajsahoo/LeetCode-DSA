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
// https://leetcode.com/problems/construct-string-from-binary-tree/discuss/2544609/C%2B%2B-or-Java-or-Python-or-Simple-Approach-or-Video-Explanation
class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root == NULL) return "";
        
        string output = to_string(root->val);
        
        if(root->left != NULL || root->right != NULL) output += "(" + tree2str(root->left) + ")"; 
        if(root->right != NULL) output += "(" + tree2str(root->right) + ")";            
        
        return output; 
    }
};