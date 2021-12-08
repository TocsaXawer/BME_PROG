#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
	int data;
	struct tree *left, *right;
} tree_elem, *tree_ptr;


tree_ptr find(tree_ptr root,
              int data)
{
	while (root != NULL &&
		data != root->data)
	{
		if (data < root->data)
			root = root->left;
		else
			root = root->right;
	}
	return root;
}


void inorder(tree_ptr root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}


void preorder(tree_ptr root)
{
	if (root == NULL)
		return;
	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);
}


void postorder(tree_ptr root)
{
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->data);
}


void delete(tree_ptr root)
{
	if (root == NULL) /* üres fa leállási feltétel */
		return;
	delete(root->left);	   /* postorder bejárás */
	delete(root->right);
	free(root);
}


tree_ptr insert(tree_ptr root, int data)
{
	if (root == NULL) {
		root = (tree_ptr)calloc(1, sizeof(tree_elem));
		root->data = data;
	}
	else if (data < root->data)
		root->left = insert(root->left, data);
	else
		root->right = insert(root->right, data);
	return root;
}


int main(void)
{
	int elems[8] = {2, 3, 5, 8, 1, -5, -7, 6};
	int i;
	tree_ptr root = NULL;

	for (i = 0; i < 8; ++i)
		root = insert(root, elems[i]);
		
	inorder(root);

	delete(root);

	return 0;
}
