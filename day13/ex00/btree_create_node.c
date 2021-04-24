/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 19:56:44 by sgath             #+#    #+#             */
/*   Updated: 2020/08/07 19:58:35 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *ivem;

	ivem = malloc(sizeof(t_btree));
	ivem->item = item;
	ivem->left = NULL;
	ivem->right = NULL;
	return (ivem);
}
