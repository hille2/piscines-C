/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:31:13 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 18:22:27 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);
int ft_list_size(t_list *begin_list);

int	main()
{
	int i = 0;
	t_list *list;
	list = 0;
	//list = ft_create_elem("sasha");
	//list->next = ft_create_elem("big");
	//ft_list_push_front(&list, "hopa");
	//printf("%d", i);
 	i = ft_list_size(list);
	printf("%d", i);
	return(0);
}
