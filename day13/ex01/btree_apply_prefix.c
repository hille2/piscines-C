/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 20:14:50 by sgath             #+#    #+#             */
/*   Updated: 2020/08/07 20:15:25 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		(*applyf)(root->item);
		btree_apply_prefix(root->left, (*applyf));
		btree_apply_prefix(root->right, (*applyf));
	}
}
