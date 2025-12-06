#include "ft_printf.h"
#include <stdio.h>
#include <fcntl.h>

/*
if the error of the fct write is properly managed it should return 1
as write returns -1 when it has error and we are multipliying by -1
so the result should be 1
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
