/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvikvam <patvikvam@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:49:42 by pvikvam           #+#    #+#             */
/*   Updated: 2023/12/04 14:04:51 by pvikvam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i = 6;
	void *ptr;

	ptr = &i;

	i = ft_printf("Bullshit percentage at the end test: %m");
	ft_printf("\nResult: %d\n", i);
	i = printf("Bullshit percentage at the end test: %m");
	printf("\nResult: %d\n", i);

	 i = ft_printf("I want to print a letter: %c!\n", 'A');
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a letter: %c!\n", 'A');
	 printf("Result: %d\n", i);
	
	 i = ft_printf("%c%c%c\n", 'a', '\t', 'b');
	 ft_printf("Result: %d\n", i);
	 i = printf("%c%c%c\n", 'a', '\t', 'b');
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print a string: %s!\n", "String");
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a string: %s!\n", "String");;
	 printf("Result: %d\n", i);

	 i = ft_printf("This should return (null). Output: %s\n", NULL);
	 ft_printf("Result: %d\n", i);
	 i = printf("This should return (null). Output: %s\n", NULL);
	 printf("Result: %d\n", i);

	 i = ft_printf("For the empty string. Output: %s\n", "");
	 ft_printf("Result: %d\n", i);
	 i = printf("For the empty string. Output: %s\n", "");
	 printf("Result: %d\n", i);

	 i = ft_printf("For a null pointer string. Output: %s\n",(char *)NULL);
	 ft_printf("Result: %d\n", i);
	 i = printf("For a null pointer string. Output: %s\n",(char *)NULL);
	 printf("Result: %d\n", i);

	 i = ft_printf(" %s\n", "can it handle \t and \n?");
	 ft_printf("Result: %d\n", i);
	 i = printf(" %s\n", "can it handle \t and \n?");
	 printf("Result: %d\n", i);

	 i = ft_printf("%s%s%s\n", "And ", "some", "joined");
	 ft_printf("Result: %d\n", i);
	 i = printf("%s%s%s\n", "And ", "some", "joined");
	 printf("Result: %d\n", i);


	
	 i = ft_printf("I want to print a string: %s and a character: %c!\n", "String", 'L');
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a string: %s and a character: %c!\n", "String", 'L');
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print a decimal (base 10) number: %d!\n", 1234567890);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a decimal (base 10) number: %d!\n", 1234567890);
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print a decimal (base 10) number: %d!\n", -1);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a decimal (base 10) number: %d!\n", -1);
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print a decimal (base 10) number: %i!\n", 1234567890);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a decimal (base 10) number: %i!\n", 1234567890);
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print an unsigned decimal (base 10) number: %u!\n", 1234567890);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print an unsigned decimal (base 10) number: %u!\n", 1234567890);
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print an unsigned decimal (base 10) number: %u!\n", -1);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print an unsigned decimal (base 10) number: %u!\n", -1);
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print a percentage sign: %%!\n");
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a percentage sign: %%!\n");
	 printf("Result: %d\n", i);
	
	 i = ft_printf("I want to print a pointer: %p!\n", ptr);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a pointer: %p!\n", ptr);
	 printf("Result: %d\n", i);

	 i = ft_printf("Pointer for an empty string: %p\n", "");
	 ft_printf("Result: %d\n", i);
	 i = printf("Pointer for an empty string: %p\n", "");
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print a number in hexadecimal: %x!\n", 4823);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a number in hexadecimal: %x!\n", 4823);
	 printf("Result: %d\n", i);
	
	 i = ft_printf("I want to print a number in hexadecimal: %X!\n", 4823);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a number in hexadecimal: %X!\n", 4823);
	 printf("Result: %d\n", i);

	 i = ft_printf("I want to print a number in hexadecimal: %x!\n", -4823);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a number in hexadecimal: %x!\n", -4823);
	 printf("Result: %d\n", i);
	
	 i = ft_printf("I want to print a number in hexadecimal: %X!\n", -4823);
	 ft_printf("Result: %d\n", i);
	 i = printf("I want to print a number in hexadecimal: %X!\n", -4823);
	 printf("Result: %d\n", i);

	 i = ft_printf("I want percentage: %%!\n");
	 ft_printf("Result: %d\n", i);
	 i = printf("I want percentage: %%!\n");
	 printf("Result: %d\n", i);

	return (0);
}
