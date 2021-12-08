void inorder(tree_ptr root)
{
	if (root == NULL)
		return;
	@inorder(root->left)@;
	@printf("%d ", root->data)@;
	@inorder(root->right)@;
}

void preorder(tree_ptr root)
{
	if (root == NULL)
		return;
	@printf("%d ", root->data)@;
	@preorder(root->left)@;
	@preorder(root->right)@;
}

void postorder(tree_ptr root)
{
	if (root == NULL)
		return;
	@postorder(root->left)@;
	@postorder(root->right)@;
	@printf("%d ", root->data)@;
}

