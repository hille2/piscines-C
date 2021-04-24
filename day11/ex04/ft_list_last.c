/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:27:00 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 19:51:32 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *last_elem;

	last_elem = 0;
	while (begin_list->next != 0)
		begin_list = begin_list->next;
	last_elem = begin_list;
	return (last_elem);
}
