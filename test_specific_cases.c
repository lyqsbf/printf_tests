/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_specific_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:36:10 by yaqliu            #+#    #+#             */
/*   Updated: 2025/12/06 11:38:21 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

/*
The idea of this test file is to look at some
specific cases with the flags %c%s%p%d%i%u%x%X%%
and edge cases
*/

// --- Define colors ---
#define RESET   "\033[0m"
#define GREEN   "\033[0;32m"
#define RED     "\033[0;31m"

static void check_test(int test_num, int res1, int res2)
{
	printf("Ret: %d | %d\n", res1, res2);
	if (res1 == res2)
		printf(GREEN "Test %d: OK\n" RESET, test_num);
	else
		printf(RED "Test %d: KO\n" RESET, test_num);
	printf("--------------------------------\n\n");
}

int main(void)
{
	int res1, res2;
	int test_num = 1;

	printf("--- STARTING EDGE CASE TESTS ---\n\n");

	printf("--- Test %d: Percent and space ---\n", test_num);
	res1 = printf("Hola % t");
	printf("\n");
	res2 = ft_printf("Hola % t");
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Invalid specifier %%z ---\n", test_num);
	res1 = printf("Hola %) world");
	printf("\n");
	res2 = ft_printf("Hola %) world");
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: String ends with %% ---\n", test_num);
	res1 = printf("Hello %");
	printf("\n");
	res2 = ft_printf("Hello %");
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Just %% ---\n", test_num);
	res1 = printf("%");
	printf("\n");
	res2 = ft_printf("%");
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: NULL format string ---\n", test_num);
	printf("(Skipping real printf(NULL) - causes SEGFAULT)\n");
	res1 = -1;
	res2 = ft_printf(NULL);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Complex percent combinations ---\n", test_num);
	res1 = printf("A %%d B %%%d C %d%% D", 123, 456);
	printf("\n");
	res2 = ft_printf("A %%d B %%%d C %d%% D", 123, 456);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Double percent ---\n", test_num);
	res1 = printf("Testing 100%% complete %%");
	printf("\n");
	res2 = ft_printf("Testing 100%% complete %%");
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Extra arguments ---\n", test_num);
	res1 = printf("Hello", 123, "world", (void *)0);
	printf("\n");
	res2 = ft_printf("Hello", 123, "world", (void *)0);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: NULL string (%%s) ---\n", test_num);
	res1 = printf("String: %s (end)", (char *)NULL);
	printf("\n");
	res2 = ft_printf("String: %s (end)", (char *)NULL);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: NULL pointer (%%p) ---\n", test_num);
	res1 = printf("Pointer: %p (end)", (void *)NULL);
	printf("\n");
	res2 = ft_printf("Pointer: %p (end)", (void *)NULL);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Printing zero (d, u, x, X) ---\n", test_num);
	res1 = printf("Zeroes: %d %u %x %X", 0, 0, 0, 0);
	printf("\n");
	res2 = ft_printf("Zeroes: %d %u %x %X", 0, 0, 0, 0);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- END OF EDGE CASE TESTS ---\n");
	
	printf("\n--- GENERAL TESTING ---\n");

	printf("\n--- NUMBER TESTING (i) and (d)---\n");
	printf("--- Test %d: Printing number ---\n", test_num);
	res1 = printf("MAX INT (i) = %i",2147483647);
	printf("\n");
	res2 = ft_printf("MAX INT (i) = %i",2147483647);
	printf("\n");
	check_test(test_num++, res1, res2);
	
	printf("--- Test %d: Printing number ---\n", test_num);
	res1 = printf("MAX INT (d) = %d",2147483647);
	printf("\n");
	res2 = ft_printf("MAX INT (d) = %d",2147483647);
	printf("\n");
	check_test(test_num++, res1, res2);
	
	printf("--- Test %d: Printing number ---\n", test_num);
	res1 = printf("bigger than MAX INT (d) = %d", 92147483647);
	printf("\n");
	res2 = ft_printf("bigger than MAX INT (d) = %d", 92147483647);
	printf("\n");
	check_test(test_num++, res1, res2);
	
	printf("--- Test %d: Printing number ---\n", test_num);
	res1 = printf("MIN INT (i) = %i", -2147483648);
	printf("\n");
	res2 = ft_printf("MIN INT (i) = %i", -2147483648);
	printf("\n");
	check_test(test_num++, res1, res2);
	
	printf("--- Test %d: Printing number ---\n", test_num);
	res1 = printf("MIN INT (d) = %d", -2147483648);
	printf("\n");
	res2 = ft_printf("MIN INT (d) = %d", -2147483648);
	printf("\n");
	check_test(test_num++, res1, res2);
	
	printf("--- Test %d: Printing number ---\n", test_num);
	res1 = printf("smaller than MIN INT (d) = %d", -92147483647);
	printf("\n");
	res2 = ft_printf("smaller than MIN INT (d) = %d", -92147483647);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Printing number ---\n", test_num);
	res1 = printf("zero = (d)%d (i)%i", 0, 0);
	printf("\n");
	res2 = ft_printf("zero = (d)%d (i)%i", 0, 0);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("\n--- HEXA TESTING ---\n");
	printf("--- Test %d: Printing hexa ---\n", test_num);
	res1 = printf("num= %d\n(unsigned) %u\nin hexa %x %X", 10000, 10000, 10000, 10000);
	printf("\n");
	res2 = ft_printf("num= %d\n(unsigned) %u\nin hexa %x %X", 10000, 10000, 10000, 10000);
	printf("\n");
	check_test(test_num++, res1, res2);
	
	printf("--- Test %d: Printing hexa ---\n", test_num);
	res1 = printf("num= %d\n(unsigned) %u\nin hexa %x %X", 9999999999999, 9999999999999, 9999999999999, 9999999999999);
	printf("\n");
	res2 = ft_printf("num= %d\n(unsigned) %u\nin hexa %x %X", 9999999999999, 9999999999999, 9999999999999, 9999999999999);
	printf("\n");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: Printing hexa ---\n", test_num);
	res1 = printf("MAX UNSIGNED INT= %d\n(unsigned) %u\nin hexa %x %X", 4294967295, 4294967295, 4294967295, 4294967295);
	printf("\n");
	res2 = ft_printf("MAX UNSIGNED INT= %d\n(unsigned) %u\nin hexa %x %X", 4294967295, 4294967295, 4294967295, 4294967295);
	printf("\n");
	check_test(test_num++, res1, res2);
	return (0);
}
