/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 17:54:44 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 18:24:12 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	if (begin_list == 0)
		return (0);
	while (begin_list->next != 0)
	{
		begin_list = begin_list->next;
		count++;
	}
	count++;
	return (count);
}
