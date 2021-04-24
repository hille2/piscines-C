/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:12:23 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 17:05:51 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_list;

	new_list = 0;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		new_list = *begin_list;
		while (new_list->next != 0)
		{
			new_list = new_list->next;
		}
		new_list->next = ft_create_elem(data);
	}
}
