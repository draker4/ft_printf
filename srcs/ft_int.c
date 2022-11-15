/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:01:27 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 18:49:50 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/ft_printf.h"

int	ft_int(int nb)
{
	char	*str;
	int		len;

	str = ft_itoa(nb);
	ft_putstr(str);
	len = (int)ft_strlen(str);
	free(str);
	return (len);
}
