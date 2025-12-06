/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_errorwrite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:40:29 by yaqliu            #+#    #+#             */
/*   Updated: 2025/12/06 11:43:02 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <fcntl.h>

/*
The purpose of this test file is to make sure that the error is
managed properly (your function returns -1 in case of error)
If the error of the fct write is properly managed it should return 1
as write returns -1 when it has error and we are multipliying by -1
so the result should be 1
You can modify the flag to make sure that all of them are working
properly
*/

int	main(void)
{
	int		result;
	char	result2;

	close(1);
	result = ft_printf("%d", 134);
	open("/dev/stdout", O_RDONLY);
	result2 = (result * -1) + '0';	
	write(2, &result2, 1);
}
