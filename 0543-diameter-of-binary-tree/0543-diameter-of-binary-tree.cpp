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
int height(TreeNode * root){

    if(root==NULL)
    return 0;

    int l_height=height(root->left);
    int r_height=height(root->right);

    return max(l_height,r_height)+1;
}


int diameter(TreeNode* root){
    if(root==NULL)
    return 0;
    int currDiameter=height(root->left)+height(root->right);
    int l_d=diameter(root->left);
    int r_d=diameter(root->right);

    return max(currDiameter,max(l_d,r_d));
}





    int diameterOfBinaryTree(TreeNode* root) {
      return  diameter(root);
    }
};