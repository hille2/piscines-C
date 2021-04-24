/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:04:19 by sjommy            #+#    #+#             */
/*   Updated: 2020/03/08 20:01:56 by lruthann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	if (x == 0 || y == 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == y - 1))
				ft_putchar('A');
			else if ((i == x - 1 && j == 0) || (i == x - 1 && j == y - 1))
				ft_putchar('C');
			else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
