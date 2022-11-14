/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:01:27 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 16:06:35 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/libftprintf.h"

int	ft_int(int nb)
{
	char	*str;

	str = ft_itoa(nb);
	ft_putstr(str);
	return ((int)ft_strlen(str));
}
