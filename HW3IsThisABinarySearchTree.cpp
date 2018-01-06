bool checkBST(Node* root) {
    if (root) {
		if (root->left) {
			if (root->left->data < root->data)
				return checkBST(root->left);
            return false;
		}
		if (root->right) {
			if (root->right->data > root->data)
				return checkBST(root->right);
            return false;
		}
	}
	return true;
}
