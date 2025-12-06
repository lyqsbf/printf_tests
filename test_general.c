/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_general.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:38:51 by yaqliu            #+#    #+#             */
/*   Updated: 2025/12/06 11:40:08 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/*
The idea of this test file is to look at some simple/basic cases
*/

int	main(void)
{
	int	n = 42;
	int	*ptr = &n;
	void	*p = NULL;
	printf("-------printf del sys-------\n\n");

	int a1  = printf("%%\nesto es un num %d y esta es su direccion %p\n\nesto es un puntero null %p", n, ptr, p);
	printf("\n\n\ncaracters impressos = %i\n", a1);

	int a2 = printf("%%\nesto es una prueba");
	printf("\n\n\ncaracters impressos = %i\n", a2);

	int a3 = printf("Hola %) world\n");
	printf("\n\n\ncaracters impressos = %i\n", a3);

	printf("\n\n-------my printf-------\n\n");

	int b1 = ft_printf("%%\nesto es un num %d y esta es su direccion %p\n\nesto es un puntero null %p", n, ptr, p);
	printf("\n\n\ncaracters impressos = %i\n", b1);
	
	int b2 = ft_printf("%%\nesto es una prueba");
	printf("\n\n\ncaracters impressos = %i\n", b2);
	
	int b3 = ft_printf("Hola %) world\n");
	printf("\n\n\ncaracters impressos = %i\n", b3);
}
