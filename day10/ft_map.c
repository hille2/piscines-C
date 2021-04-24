/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 20:22:41 by sgath             #+#    #+#             */
/*   Updated: 2020/08/04 15:02:25 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_map;

	i = 0;
   	tab_map = (int *)malloc(sizeof(int) * (length));
	while (i < length){
		tab_map[i] = (*f)(tab[i]);
		i++;
		//printf("{%d} ",tab[i]);
		//printf("[%d] ", tab_map[i]);
	}
	return (tab_map);
}

int ft_q(int i)
{
	i--;
	return (i);
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7};
	int len = 5;
	int *mom =  ft_map(tab, len, &ft_q);
	for (int i = 0; i < len; i++)
		printf("|%d ", mom[i]);
	return (0);	
}
