/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:52:30 by sgath             #+#    #+#             */
/*   Updated: 2020/08/08 21:25:29 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_rush00(int x, int y)
{
	int i;
	int j;

	if (x < 0 || y < 0)
		return ;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
				ft_putchar('o');
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				ft_putchar('o');
			else if ((i == 0 && j < y - 1) || (i == x - 1 && j < y - 1))
				ft_putchar('|');
			else if ((i > 0 && j == 0) || (i < x - 1 && j == y - 1))
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	ft_rush01(int x, int y)
{

}

void	ft_rush02(int x, int y) //complit
{
	int i;
	int j;
	
	if (x < 0 || y < 0)
		return ;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
				ft_putchar('A');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
				ft_putchar('C');
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	ft_rush03(int x, int y)
{
	int i;
	int j;

	if (x == 0 || y == 0)
		return ;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == y - 1))
				ft_putchar('A');
			else if ((i == x - 1 && j == 0) || (i == x - 1 && j == y - 1))
				ft_putchar('C');
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
void	ft_rush04(int x, int y)
{
	int i;
	int j;
	
	if (x < 0 || y < 0)
		return ;
	j = -1;
    while (++j < y)
    {
        i = -1;
        while (++i < x)
        {
            if (i == 0 && j == 0 )
                ft_putchar('A');
            else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
                ft_putchar('C');
            else if (i == x - 1 && j == y - 1)
                ft_putchar('A');
            else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
                ft_putchar('B');
            else
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}
