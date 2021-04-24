/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:53:38 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 21:26:10 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *param_list;
	t_list *push_list;

	param_list = ft_create_elem(av [--ac]);
	push_list = param_list;
	while (--ac >= 0)
	{
        param_list = param_list->next;
		param_list = ft_create_elem(av[ac]);
	}
	return(push_list);
}
