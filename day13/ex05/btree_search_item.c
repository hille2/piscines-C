/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 20:29:53 by sgath             #+#    #+#             */
/*   Updated: 2020/08/07 23:19:58 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	int		i;
	void	*data;

	if (root != NULL)
	{
		data = btree_search_item(root->left, data_ref,
				(*cmpf));
		if (data != NULL)
			return (data);
		else
		{
			i = (*cmpf)(root->item, data_ref);
			if (i == 0)
				return (root->item);
			else
			{
				data = btree_search_item(root->right, data_ref,
						(*cmpf));
				return (data);
			}
		}
	}
	return (NULL);
}
