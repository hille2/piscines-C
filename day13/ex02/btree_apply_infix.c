/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 20:16:03 by sgath             #+#    #+#             */
/*   Updated: 2020/08/07 20:23:28 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		bthee_apply_infix(root->left, (*applyf));
		(*applyf)(root->item);
		btree_apply_infix(root->right, (*applyf));
	}
}
