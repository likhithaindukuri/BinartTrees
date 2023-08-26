class Solution {
public:
    void inOrder(vector<int> & inorder,TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        inOrder(inorder,root->left);
        inorder.push_back(root->val);
        inOrder(inorder,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        inOrder(inorder,root);
        return inorder;
    }
};