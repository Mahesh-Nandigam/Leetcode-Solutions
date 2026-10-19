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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
        return {};
        vector<vector<int>>ans;
        queue<TreeNode*>Q;
        Q.push(root);
        Q.push(NULL);
        vector<int>level;
        while(!Q.empty()){
            TreeNode* curr=Q.front();
            Q.pop();
            if(curr==NULL){
            ans.push_back(level);
            level={};
            if(Q.empty())
            break;
            Q.push(NULL);
            }
            else{

            level.push_back(curr->val);

            if(curr->left)
            Q.push(curr->left);

            if(curr->right)
            Q.push(curr->right);

            }

        }
        return ans;
    }
};