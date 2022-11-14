/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:44:38 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 17:46:06 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

int		ft_nb_args(const char *str);
int		ft_printf(const char *str, ...);
int		ft_conv(va_list ap, const char *str, int i);
int		ft_char(int c);
int		ft_str(char *s);
int		ft_pointer(void *p);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr_base(unsigned long long nb, int *count);
size_t	ft_strlen(const char *s);
int		ft_int(int nb);

#endif