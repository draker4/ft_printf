/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:03:42 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 18:11:55 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/libftprintf.h"

int	ft_uint(unsigned int nb)
{
	char	*str;

	str = ft_itoa_unsigned(nb);
	ft_putstr(str);
	return ((int)ft_strlen(str));
}
