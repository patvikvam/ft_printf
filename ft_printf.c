/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:28:20 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/27 12:27:15 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_check(va_list ap, char c)
{
    if (c == 'c')
        return ft_putchar(va_arg(ap, int));
    else if (c == 's')
        return ft_putstr(va_arg(ap, char *));
    else if (c == 'p')
    {
        if (ft_putstr("0x") < 0)
            return (-1);
        return ft_putpoint(va_arg(ap, void *)) + 2;
    }
    else if (c == 'i' || c == 'd')
        return ft_putnbr(va_arg(ap, int));
    else if (c == 'u')
        return ft_uns_putnbr(va_arg(ap, unsigned int));
    else if (c == 'x' || c == 'X')
        return ft_puthex(va_arg(ap, unsigned int), c);
    else if (c == '%')
        return ft_putchar('%');
    else
    {
        return (-1);
    }
}


static int	ft_putprintf(va_list ap, const char *format, char *s, int len)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr(s, format[i + 1]))
		{
			temp = ft_check(ap, format[i + 1]);
			if (temp < 0)
				return (-1);
			len += temp;
			i++;
		}
		else
		{
			if (ft_putchar(format[i]) < 0)
				return (-1);
			len++;
		}
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		len;
	char	*s;
	int		temp;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	s = "cspdiuxX%";
	temp = 0;
	va_start(ap, format);
	len = ft_putprintf(ap, format, s, len);
	va_end(ap);
	return (len);
}
