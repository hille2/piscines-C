/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 20:25:57 by sgath             #+#    #+#             */
/*   Updated: 2020/08/10 21:06:47 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	int		i;
	t_btree	*tree;

	tree = *root;
	if (*root == 0)
		btree_create_node(item);
	else
	{
		i = (*cmpf)(&tree->item, item);
		if (i <= 0)
			btree_insert_data(&tree->right, item, (*cmpf));
		if (i > 0)
			btree_insert_data(&tree->left, item, (*cmpf));
	}
}
