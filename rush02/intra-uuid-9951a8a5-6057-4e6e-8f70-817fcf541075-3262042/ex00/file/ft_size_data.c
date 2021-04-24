/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 16:20:00 by sgath             #+#    #+#             */
/*   Updated: 2020/08/09 23:35:13 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_size_lon(char *str)
{
	int wed;

	wed = 0;
	while (*str)
	{
		if (*str == '\n')
			wed++;
		str++;
	}
	return (wed);
}

int	ft_size_wed(char *str)
{
	int lon;

	lon = 0;
	while (*str != '\n')
	{
		lon++;
		str++;
	}
	return (lon);
}

char	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
  {
    if (s1[i] == s2[i])
      i++;

    if (s1[i] > s2[i])
      return ('1');
    if (s1[i] < s2[i])
      return ('1');
  }
  return ('0');
}
