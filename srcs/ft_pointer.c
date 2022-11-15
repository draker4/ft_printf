/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:28:54 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 18:45:02 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/ft_printf.h"

int	ft_pointer(void *p)
{
	int	count;

	count = 0;
	ft_putstr("0x");
	ft_putnbr_base((unsigned long long)p, &count, 0);
	return (count + 2);
}
