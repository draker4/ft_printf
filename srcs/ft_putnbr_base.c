/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:36:45 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 17:53:42 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/libftprintf.h"

void	ft_putnbr_base(unsigned long long nb, int *count)
{
	if (nb >= 16)
		ft_putnbr_base(nb / 16, count);
	*count += 1;
	ft_putchar("0123456789abcdef"[nb % 16]);
}
