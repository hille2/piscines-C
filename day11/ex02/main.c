/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:31:13 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 17:40:41 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list *ft_create_elem(void *data);

void	ft_print_list(t_list *list);

void ft_list_push_front(t_list **begin_list, void *data);

int	main()
{
	t_list *list;
	list = 0;
	list = ft_create_elem("sasha");
	list->next = ft_create_elem("big");
	ft_list_push_front(&list, "hopa");
	ft_print_list(list);
	return(0);
}
