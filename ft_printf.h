/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:23:28 by pvikvam           #+#    #+#             */
/*   Updated: 2023/11/27 10:58:05 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_strlen(char *s);
int		ft_putchar(int c);
int		ft_putstr(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *src);
int		ft_putnbr(int n);
int		ft_uns_putnbr(unsigned int n);
int		ft_putpoint(void *ptr);
int		ft_puthex(unsigned int n, char c);

#endif