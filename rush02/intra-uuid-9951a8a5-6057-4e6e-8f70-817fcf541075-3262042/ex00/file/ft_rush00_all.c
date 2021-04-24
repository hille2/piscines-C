/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:52:30 by sgath             #+#    #+#             */
/*   Updated: 2020/08/09 23:12:15 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_rush00(int x, int y, int n, char *str)
{
	int		i;
	int		j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
				str[++n] = 'o';
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				str[++n] = 'o';
			else if ((i == 0 && j < y - 1) || (i == x - 1 && j < y - 1))
				str[++n] = '|';
			else if ((i > 0 && j == 0) || (i < x - 1 && j == y - 1))
				str[++n] = '-';
			else
				str[++n] = ' ';
		}
		str[++n] = '\n';
	}
	str[++n] = '\0';
	return (str);
}

char	*ft_rush01(int x, int y, int n, char *str)
{
	int		i;
	int		j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if (i == 0 && j == 0)
				str[++n] = '/';
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				str[++n] = '\\';
			else if (i == x - 1 && j == y - 1)
				str[++n] = '/';
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				str[++n] = '*';
			else
				str[++n] = ' ';
		}
		str[++n] = '\n';
	}
	str[++n] = '\0';
	return (str);
}

char	*ft_rush02(int x, int y, int n, char *str)
{
	int		i;
	int		j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
				str[++n] = 'A';
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
				str[++n] = 'C';
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				str[++n] = 'B';
			else
				str[++n] = ' ';
		}
		str[++n] = '\n';
	}
	str[++n] = '\0';
	return (str);
}

char	*ft_rush03(int x, int y, int n, char *str)
{
	int		i;
	int		j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == y - 1))
				str[++n] = 'A';
			else if ((i == x - 1 && j == 0) || (i == x - 1 && j == y - 1))
				str[++n] = 'C';
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				str[++n] = 'B';
			else
				str[++n] = ' ';
		}
		str[++n] = '\n';
	}
	str[++n] = '\0';
	return (str);
}

char	*ft_rush04(int x, int y, int n, char *str)
{
	int		i;
	int		j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if (i == 0 && j == 0)
				str[++n] = 'A';
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				str[++n] = 'C';
			else if (i == x - 1 && j == y - 1)
				str[++n] = 'A';
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				str[++n] = 'B';
			else
				str[++n] = ' ';
		}
		str[++n] = '\n';
	}
	str[++n] = '\0';
	return (str);
}
