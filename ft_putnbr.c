/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:25:14 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/23 11:25:16 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_cal(char *result, int count, int nbr)
{
	int	i;
	int	n;
	int	temp;

	n = nbr;
	i = count - 1;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	if (n < 0)
		temp = 1;
	else
		temp = 0;
	while (i >= temp)
	{
		result[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	result[count] = '\0';
	return (result);
}

static char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	int		nbr;

	nbr = n;
	count = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	result = (char *)malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	return (ft_cal(result, count, nbr));
}

int	ft_putnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	if (!num)
		return (-1);
	len = ft_putstr(num);
	free(num);
	return (len);
}
