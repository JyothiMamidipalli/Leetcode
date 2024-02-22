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
    void levelorder(TreeNode *root,vector<vector<int>>&ans)
    {
        if(root==NULL) return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>l1;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *node=q.front();
                q.pop();
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
                l1.push_back(node->val);
            }
            ans.push_back(l1);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        levelorder(root,ans);
        return ans;
    }
};