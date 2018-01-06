void levelOrder(node * root)
{
    queue<node*> q;
	q.push(root);
	while (!q.empty())
	{
		node* currRoot = q.front();
		cout << currRoot->data << " ";
		q.pop();

		if (currRoot->left)
		{
			q.push(currRoot->left);
		}
		if (currRoot->right)
		{
			q.push(currRoot->right);
		}
	}
}
