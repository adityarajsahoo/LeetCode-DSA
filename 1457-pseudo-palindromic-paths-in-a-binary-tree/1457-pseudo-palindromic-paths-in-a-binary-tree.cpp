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

// https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/discuss/2573908/C%2B%2B-oror-Unordered-Map-oror-DFS-oror-Easy-O(N)-Solution

class Solution {
public:
    int ans=0;
    unordered_map<int,int>mp;
    void palindrome(TreeNode *root)
    {
        if(!root)   return;
        if(!root->left && !root->right)
        {
            mp[root->val]++;
            int odd=0;
            for(auto m:mp)   if((m.second)&1)   odd++;
            if(odd<=1)  ans++;
            mp[root->val]--;
            return;
        }
        mp[root->val]++;
        palindrome(root->left);
        palindrome(root->right);
        mp[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        palindrome(root);
        return ans;
    }
};