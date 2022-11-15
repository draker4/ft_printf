/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:15:18 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 18:44:25 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/ft_printf.h"

int	ft_hexa(unsigned int nb, int maj)
{
	int	count;

	count = 0;
	ft_putnbr_base(nb, &count, maj);
	return (count);
}
