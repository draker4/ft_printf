/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:35:08 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 17:41:07 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int	sum;
	int	real;

	real = printf("152 = %i et f = %c et chaine = %s et 56 = %d et p = %p\n", 152, 'f', "chaine", 56, &sum);
	sum = ft_printf("152 = %i et f = %c et chaine = %s et 56 = %d et p = %p\n", 152, 'f', "chaine", 56, &sum);
	printf("sum = %d et real = %d\n", sum, real);
}
