class Solution {
public:
    void postOrder(vector<int> & postorder,TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        postOrder(postorder,root->left);
        postOrder(postorder,root->right);
        postorder.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        postOrder(postorder,root);
        return postorder;
    }
};