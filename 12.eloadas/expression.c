#include <stdio.h>
#include <ctype.h>

typedef struct tree_s {
	char data;
	struct tree_s *left, *right;
} tree_elem, *tree_ptr;

int eval(tree_ptr xpr)
{
	char c = xpr->data;
	if (isdigit(c)) 		/* leállási feltétel */
		return c - '0';
	if (c == '+')
		return eval(xpr->left) + eval(xpr->right);
	if (c == '*')
		return eval(xpr->left) * eval(xpr->right);
}

double feval(tree_ptr xpr, double x)
{
	char c = xpr->data;
	if (isdigit(c))
		return c - '0';
	if (c == 'x')
		return x;
	if (c == '+')
		return feval(xpr->left, x) + feval(xpr->right, x);
	if (c == '*')
		return feval(xpr->left, x) * feval(xpr->right, x);
}

double deval(tree_ptr xpr, double x)
{
	char c = xpr->data;
	if (isdigit(c)) 		/* leállási feltétel */
		return 0.0;
	if (c == 'x') 		/* leállási feltétel */
		return 1.0;
	if (c == '+')
		return deval(xpr->left, x) + deval(xpr->right, x);
	if (c == '*')
		return deval(xpr->left, x) * feval(xpr->right, x) +
			feval(xpr->left, x) * deval(xpr->right, x);
}

int main(void)
{
	tree_elem two = {'2', NULL, NULL};
	tree_elem x = {'x', NULL, NULL};
	tree_elem plus = {'+', &two, &x};
	printf("%f\n", feval(&plus, 2));
	printf("%f\n", deval(&plus, 2));
	return 0;
}
