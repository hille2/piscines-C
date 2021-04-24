/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 12:59:26 by sgath             #+#    #+#             */
/*   Updated: 2020/08/09 23:17:07 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1

char	*ft_read(void)
{
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];
	char	*n_buf;
	char	*tmp;

	i = 0;
	n_buf = malloc(sizeof(char));
	while ((ret = read(0, buf, 1)))
	{
		tmp = n_buf;
		n_buf = (char *)malloc(sizeof(char) * (i + 2));
		n_buf[0] = '\0';
		n_buf = ft_strcat(n_buf, tmp);
		free(tmp);
		tmp = 0;
		tmp = (char *)malloc(sizeof(char) * (i + 2));
		n_buf = ft_strcat(n_buf, buf);
		n_buf[++i] = '\0';
	}
	return (n_buf);
}

int		main(void)
{
	char	*str;
	int		wed;
	int		lon;

	str = ft_read();
	if (str == '\0')
	{
		ft_putstr("aucune\n");
		return (0);
	}
	wed = ft_size_wed(str);
	lon = ft_size_lon(str);
	ft_print_rush(ft_cmp_rushs(wed, lon, str), wed, lon);
	return (0);
}
