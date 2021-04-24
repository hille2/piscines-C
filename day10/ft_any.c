/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 21:33:32 by sgath             #+#    #+#             */
/*   Updated: 2020/08/04 15:04:36 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int i;
	
	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == '1')
			return (1);
		i++;
	}
	return (0);
}

int elen(char *c[a][b])
{
	int e = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (c[i][j] =='e')
				e = 1;
		}
	}
	return (e);
}
		
	
int main()
{
	char *str[4][5] = {"heeee", " world", "qwwww", "cnief"};
	int i = ft_any(str, &elen);
	printf("%d", i); 
	return (0);
}
