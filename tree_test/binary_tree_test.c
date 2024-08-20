#include "binary_tree_test.h"

t_tree*	create_empty_tree(void)
{
	return NULL;
}

t_tree*	create_tree(char c, t_tree* l, t_tree* r)
{
	t_tree* tr = (t_tree*)malloc(sizeof(t_tree));
	tr->info = c;
	tr->left = l;
	tr->right = r;
	return (tr);
}

t_tree*	free_tree(t_tree* tr)
{
	if (!empty_tree(tr))
	{
		free_tree(tr->left); 	/* libera lst */
		free_tree(tr->right); 	/* libera rst */
		free(tr); 		/* libera raiz */
	}
	return NULL;
}

int	empty_tree(t_tree* tr)
{
	return (tr == NULL);
}

int	tree_belongs(t_tree* tr, char c)
{
	if (empty_tree(tr))
		return 0;
	else
		return tr->info == c || tree_belongs(tr->left, c) || tree_belongs(tr->right, c);
}

void	print_tree(t_tree* tr)
{
	if (!empty_tree(tr))
	{
		printf("%c ",tr->info);
		print_tree(tr->left);
		print_tree(tr->right);
	}
}

int	main()
{
	//sub-árvore 'd'
	t_tree	*tr1 = create_tree('d', create_empty_tree(), create_empty_tree());
	//sub-árvore 'b'
	t_tree	*tr2 = create_tree('b', create_empty_tree(), tr1);
	//sub-árvore 'e'
	t_tree	*tr3 = create_tree('e', create_empty_tree(), create_empty_tree());
	//sub-árvore 'f'
	t_tree	*tr4 = create_tree('f', create_empty_tree(), create_empty_tree());
	//sub-árvore 'c'
	t_tree	*tr5 = create_tree('c', tr3, tr4);
	//árvore 'a'
	t_tree	*tr = create_tree('a', tr2, tr5);
	print_tree(tr);
	printf("\n");
	tr->left->left = create_tree('x', create_tree('y', create_empty_tree(), create_empty_tree()), 
			create_tree('z', create_empty_tree(), create_empty_tree()));
	print_tree(tr);
	printf("\n");
	tr->right->left = free_tree(tr->right->left);
	print_tree(tr);
	printf("\n");
	return (0);
}
