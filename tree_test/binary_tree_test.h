#ifndef BINARY_TREE_TEST_H
# define BINARY_TREE_TEST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_tree
{
	char	info;
	struct s_tree	*left;
	struct s_tree	*right;
}	t_tree;

//#empty_tree_creation and tree_creation: as duas funções para a criação de árvores representam os dois casos da definição recursiva de árvore binaria
//##uma árvore binária t_tree* tr: 
//– é vazia tr = empty_tree_creation(). 
//– é composta por uma raiz e duas subarvores a = tree_creation(c, l, r);.
t_tree*	create_empty_tree(void);
t_tree*	create_tree(char c, t_tree* l, t_tree* r);


t_tree*	free_tree(t_tree* tr);
int	empty_tree(t_tree* tr);
int	tree_belongs(t_tree* tr, char c);
void	print_tree(t_tree* tr);

#endif
