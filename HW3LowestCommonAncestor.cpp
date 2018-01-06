node *lca(node *root, int a, int b)
{
    if(root->data > a && root->data > b)
        root = lca(root->left, a, b);
    if(root->data < a && root->data < b)
        root = lca(root->right, a, b);
    return root;
}
