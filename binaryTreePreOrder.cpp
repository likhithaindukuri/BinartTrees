class Solution {
public:
    void preOrder(vector<int> & preorder,TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        preorder.push_back(root->val);
        preOrder(preorder,root->left);
        preOrder(preorder,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        preOrder(preorder,root);
        return preorder;
    }
};