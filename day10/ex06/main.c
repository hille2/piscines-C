/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:37:11 by sgath             #+#    #+#             */
/*   Updated: 2020/08/04 23:36:37 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (ft_strcmp(argv[2],"-") == 0)
			ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
		if (ft_strcmp(argv[2],"+") == 0)
			ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
		if (ft_strcmp(argv[2],"*") == 0)
			ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
		if (ft_strcmp(argv[2],"/") == 0)
		{
			if (ft_atoi(argv[3]) == 0)
			{
				ft_putstr("Stop : division by zero");
				return (0);
			}
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
		}
		if (ft_strcmp(argv[2],"%") == 0) 
		{
			if (ft_atoi(argv[3]) == 0)
			{
				ft_putstr("Stop : modulo by zero");
				return (0);
			}
			ft_putnbr(ft_atoi(argv[2]) % ft_atoi(argv[3]));
		}
	}
	return (0);
}
