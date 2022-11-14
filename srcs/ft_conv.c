/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:23:01 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 17:40:06 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/libftprintf.h"

int	ft_conv(va_list ap, const char *str, int i)
{
	if (str[i + 1] && str[i + 1] == 'c')
		return (ft_char(va_arg(ap, int)));
	else if (str[i + 1] && str[i + 1] == 's')
		return (ft_str(va_arg(ap, char *)));
	else if (str[i + 1] && str[i + 1] == 'p')
		return (ft_pointer(va_arg(ap, void *)));
	else if (str[i + 1] && (str[i + 1] == 'i' || str[i + 1] == 'd'))
		return (ft_int(va_arg(ap, int)));
	return (0);
}
