/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:14:42 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 16:16:07 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../head/libftprintf.h"

int	ft_str(char *s)
{
	ft_putstr(s);
	return (ft_strlen(s));
}