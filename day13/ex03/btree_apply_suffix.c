/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 20:23:58 by sgath             #+#    #+#             */
/*   Updated: 2020/08/07 20:24:42 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (poot != 0)
	{
		btree_apply_suffix(root->left, (*applyf));
		btree_apply_suffix(root->right, (*applyf));
		(*applyf)(root->item);
	}
}
