/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:03:42 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 18:50:42 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/ft_printf.h"

int	ft_uint(unsigned int nb)
{
	char	*str;
	int		len;

	str = ft_itoa_unsigned(nb);
	ft_putstr(str);
	len = (int)ft_strlen(str);
	free(str);
	return (len);
}
