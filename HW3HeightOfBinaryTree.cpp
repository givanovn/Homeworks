int height(Node* root) {
int LeftHeight = 0, RightHeight = 0;
if(root->right)
{
RightHeight++;
RightHeight += height(root->right);
}
if(root->left)
{
LeftHeight++;
LeftHeight += height(root->left);
}
if(LeftHeight > RightHeight) return LeftHeight;
return RightHeight;
}
