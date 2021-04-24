/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:09:55 by sgath             #+#    #+#             */
/*   Updated: 2020/08/09 23:38:46 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

int		ft_size_wed(char *str);
int		ft_size_lon(char *str);
char	ft_strcmp(char *s1, char *s2);
char	*ft_cmp_rushs(int wed, int log, char *str);
char	*ft_strcat(char *dest, char *src);
void	ft_putnbr(int nb);
char	*ft_rush00(int x, int y, int n, char *str);
char	*ft_rush01(int x, int y, int n, char *str);
char	*ft_rush02(int x, int y, int n, char *str);
char	*ft_rush03(int x, int y, int n, char *str);
char	*ft_rush04(int x, int y, int n, char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_display(char ex, int n, int wed, int lon);
void	ft_print_rush(char *array, int wed, int lon);

#endif
