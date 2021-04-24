/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:33:58 by sgath             #+#    #+#             */
/*   Updated: 2020/08/05 14:19:46 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft.h"
#include "ft_list.h"

void	ft_print_list(t_list *list);

t_list	*ft_create_elem(void *data)
{
	t_list *tata;
	
	tata = malloc(sizeof(t_list));
	tata->data = data;
	tata->next = NULL;
	return (tata);
}

int main(void)
{
	t_list *list;
	list = NULL;
	list = ft_create_elem("sasha");
	list->next = ft_create_elem("f");
	ft_print_list(list);
	return (0);
}
