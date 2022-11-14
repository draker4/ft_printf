/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:35:08 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 18:21:02 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int	sum;
	int	real;

	real = printf("152 = %i et f = %c et chaine = %s et 56 = %d et p = %p et 5624 = %u et hexax = %x et hexaX = %X et %%\n", -152, 'f', "chaine", -56, &sum, 5624, 563985, 563985);
	sum = ft_printf("152 = %i et f = %c et chaine = %s et 56 = %d et p = %p et 5624 = %u et hexax = %x et hexaX = %X et %%\n", -152, 'f', "chaine", -56, &sum, 5624, 563985, 563985);
	printf("sum = %d et real = %d\n", sum, real);
}
