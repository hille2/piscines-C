/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:36:45 by sgath             #+#    #+#             */
/*   Updated: 2020/08/04 15:19:06 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	
	i = 0;
	while (i < length-1)
	{
		if ((*f)((tab[i]), (tab[i+1])) > 0)
			return (0);
		i++;
	}
	return (1);
}

int afr(int a, int b)
{
	if (a < b)
		return (a - b);
	if (a > b)
		return (a - b);
	else
		return (0);
}

int	main()
{
	int tab[5] = {1, 3,7, 6, 9};
	int len = 4;
	printf("%d\n", ft_is_sort(tab, len, &afr));
}
