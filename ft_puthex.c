/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:24:49 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/23 11:24:56 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_con_hex(unsigned int n, char c, int len)
{
	if (c == 'x')
	{
		if (ft_putchar("0123456789abcdef"[n % 16]) < 0)
			return (-1);
		len++;
	}
	else if (c == 'X')
	{
		if (ft_putchar("0123456789ABCDEF"[n % 16]) < 0)
			return (-1);
		len++;
	}
	return (len);
}

int	ft_puthex(unsigned int n, char c)
{
	int	len;
	int	temp;

	len = 0;
	temp = 0;
	if (n == 0)
	{
		if (ft_putchar('0') < 0)
			return (-1);
		return (1);
	}
	else
	{
		if (n > 15)
		{
			temp = ft_puthex(n / 16, c);
			if (temp < 0)
				return (-1);
			len += temp;
		}
		len = ft_con_hex(n, c, len);
	}
	return (len);
}
