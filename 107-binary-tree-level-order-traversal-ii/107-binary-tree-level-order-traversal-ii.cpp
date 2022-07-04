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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            TreeNode* t=q.front();
            q.pop();
         if(t==NULL)
         {
             ans.push_back(temp);
             temp.clear();
             if(q.empty())
             {
                 reverse(ans.begin(),ans.end());
                 return ans;
             }
             else
             {
                 q.push(NULL);
             }
            continue;
         }
         temp.push_back(t->val);
         if(t->left!=NULL)
             q.push(t->left);
         if(t->right!=NULL)
             q.push(t->right);
     }
        reverse(ans.begin(),ans.end());
        return ans;     
    }
};