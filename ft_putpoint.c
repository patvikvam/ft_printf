/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:25:32 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/23 11:25:38 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(void *ptr)
{
	unsigned long	result;
	int				len;
	int				temp;

	temp = 0;
	result = (unsigned long)ptr;
	len = 0;
	if (result > 15)
	{
		temp = ft_putpoint((void *)(result / 16));
		if (temp < 0)
			return (-1);
		len += temp;
	}
	if (ft_putchar("0123456789abcdef"[result % 16]) < 0)
		return (-1);
	len++;
	return (len);
}
