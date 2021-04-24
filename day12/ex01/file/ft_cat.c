/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 21:23:30 by sgath             #+#    #+#             */
/*   Updated: 2020/08/07 00:06:47 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"
#define BUF_SIZE 1

void	ft_cat(char *argv)
{
	int		fd;
	char	c[BUF_SIZE];

	fd = open(argv, O_RDONLY);
	if (errno == 2 || errno == 13)
	{
		ft_putstr("cat: ");
		ft_putstr(argv);
		if (errno == 2)
			ft_putstr(": No such file or directory\n");
		if (errno == 13)
			ft_putstr(": No such file or directory\n");
	}
	fd = read(fd, c, 1);
	if (errno == 21)
	{
		ft_putstr("cat: ");
		ft_putstr(argv);
		ft_putstr(": Is a directory\n");
	}
	close(fd);
	if (errno == 0)
		ft_display_file(argv);
}
