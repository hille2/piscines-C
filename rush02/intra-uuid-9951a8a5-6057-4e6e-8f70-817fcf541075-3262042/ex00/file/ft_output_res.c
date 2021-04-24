/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_res.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 16:49:24 by sgath             #+#    #+#             */
/*   Updated: 2020/08/09 23:37:49 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rush.h"

char	*ft_cmp_rushs(int wed, int lon, char *str)
{
	char	*arr;
	int 	n;
	char	*srh;
	
	arr = malloc(sizeof(char) * 6);
	ft_putstr(str);
	n = -1;
	srh = malloc(sizeof(char) * (wed * lon + wed + 1));
	arr[0] = ft_strcmp(ft_rush00(wed, lon, n, srh), str);
	arr[1] = ft_strcmp(ft_rush01(wed, lon, n, srh), str);
	arr[2] = ft_strcmp(ft_rush02(wed, lon, n, srh), str);
	arr[3] = ft_strcmp(ft_rush03(wed, lon, n, srh), str);
	arr[4] = ft_strcmp(ft_rush04(wed, lon, n, srh), str);
	arr[5] = '\0';
	return (arr);
}

void	print_display(char ex, int n, int wed, int lon)
{
	if (n > 2)
		ft_putstr(" || ");
	if (ex == 0 || ex == 1)
		ft_putstr("[rush-0");
	else
		ft_putstr("[colle-0");
	ft_putchar(ex);
	ft_putstr("] [");
	ft_putnbr(wed);
	ft_putstr("] [");
	ft_putnbr(lon);
	ft_putstr("]"); 
}

void	ft_print_rush(int *array, int wed, int lon)
{
	int n;

	n = 0;
	if(array[0] == 0)
		print_display('0', n++, wed, lon);
	if(array[1] == 0)
		print_display('1', n++, wed, lon);
	if(array[2] == 0)
		print_display('2', n++, wed, lon);
	if(array[3] == 0)
		print_display('3', n++, wed, lon);
	if(array[4] == 0)
		print_display('4', n++, wed, lon);
	if (n == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
