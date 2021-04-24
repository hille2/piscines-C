/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 21:26:02 by sgath             #+#    #+#             */
/*   Updated: 2020/08/04 15:01:56 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_map;

	i = 0;
	tab_map = (int *)malloc(sizeof(int) * (length));
	while (i < length)
	{
		tab_map[i] = tab[i];
		i++;
	}
	return (tab_map);
}
