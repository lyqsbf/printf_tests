/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:55:17 by yaqliu            #+#    #+#             */
/*   Updated: 2025/11/10 18:17:06 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

/*
the idea of myprintf.c and sysprintf.c is to pass the same tests to both fct
your ft_printf and the printf of the system and compare the results
we can redirect the output to a document (for instance .txt) and then
use the command "diff" so as to compare the outputs

NOTE : the only difference that it should be found is the addr of the pointer
       as they are different variables and have different memory locations
*/

int	main(void)
{
	int		n;
	unsigned int	x;
	int	*ptr;
	void	*p;

	ptr = &n;
	p = NULL;

	//pointer
	printf("\n\n-----TEST POINTER----\n\n");
	ft_printf("addr of n = %p\n", ptr);
	//NULL pointer
	printf("\n\n-----TEST NULL POINTER----\n\n");
	fflush(stdout);
	ft_printf("null pointer: %p\n", p);
	//max int
	printf("\n\n-----TEST MAX INT----\n\n");
	fflush(stdout);
	n = 2147483647;
	ft_printf("max int = %i\n", n);
	ft_printf("max int = %d\n", n);
	//min int
	printf("\n\n-----TEST MIN INT----\n\n");
	fflush(stdout);
	n = -2147483648;
	ft_printf("min int = %i\n", n);
	ft_printf("min int = %d\n", n);
	//max unsigned int
	printf("\n\n-----TEST MAX UNSIGNED INT----\n\n");
	fflush(stdout);
	x = 4294967295;
	ft_printf("max unsigned int = %u\n", x);
	//test hexa
	printf("\n\n-----TEST HEXA----\n\n");
	fflush(stdout);
	printf("TEST 1:\n");
	fflush(stdout);
	ft_printf("num = %i\nhexa = %x\n", n, n);
	printf("TEST 2:\n");
	fflush(stdout);
	ft_printf("num = %i\nhexa = %x\n", x, x);
	printf("TEST 3:\n");
	fflush(stdout);
	ft_printf("num = %i\nhexa = %x\n", -n, -n);
	printf("TEST 4:\n");
	fflush(stdout);
	ft_printf("num = %i\nhexa = %x\n", -x, -x);
	printf("TEST 5:\n");
	fflush(stdout);
	ft_printf("num = %i\nhexa = %x\n", 0, 0);
}
