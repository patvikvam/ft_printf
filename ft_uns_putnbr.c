/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_uns_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:26:54 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/23 11:27:04 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_uns_cal(char *result, int count, unsigned int n)
{
	int	i;

	i = count - 1;
	while (i >= 0)
	{
		result[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	result[count] = '\0';
	return (result);
}

static char	*ft_uns_itoa(unsigned int n)
{
	char	*result;
	int		count;
	int		nbr;

	nbr = n;
	count = 0;
	if (n == 0)
		return (ft_strdup("0"));
	while (n)
	{
		n = n / 10;
		count++;
	}
	result = (char *)malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	return (ft_uns_cal(result, count, nbr));
}

int	ft_uns_putnbr(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uns_itoa(n);
	if (!num)
		return (-1);
	len = ft_putstr(num);
	free(num);
	return (len);
}
