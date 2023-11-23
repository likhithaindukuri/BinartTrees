int isSumProperty(struct node* node)
{
    /* left_data is left child data and
       right_data is for right child data*/
    int sum = 0;
 
    /* If node is NULL or it's a leaf node
    then return true */
    if (node == NULL
        || (node->left == NULL && node->right == NULL))
        return 1;
    else {
        /* If left child is not present then 0
        is used as data of left child */
        if (node->left != NULL)
            sum += node->left->data;
 
        /* If right child is not present then 0
        is used as data of right child */
        if (node->right != NULL)
            sum += node->right->data;
 
        /* if the node and both of its children
        satisfy the property return 1 else 0*/
        return ((node->data == sum)
                && isSumProperty(node->left)
                && isSumProperty(node->right));
    }
}