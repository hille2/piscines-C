/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:08:47 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 19:49:33 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_print_list(t_list *list);
t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);

int	main()
{
	t_list *list;
	list = 0;
	list = ft_create_elem("sasha");
	list->next = ft_create_elem("big");
	list->next = ft_create_elem("hopa");
	list = ft_list_last(list);
	ft_print_list(list);
	return(0);
}
